// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/States/Locomotion/FG_LocomotionAirJumpSubState.h"
#include "Player/FG_PlayerCharacter.h"
#include "Player/States/Core/FG_LocomotionPlayerState.h"
#include "Player/FG_DA_PlayerStats.h"
#include "Player/States/Locomotion/FG_LocomotionMovingSubState.h"
#include "Player/States/Locomotion/FG_LocomotionAirborneSubState.h"
#include "Player/States/Core/FG_GlidingPlayerState.h"
#include "Player/FG_SFSM.h"
#include "Player/Movement/FG_LocomotionComponent.h"
#include "Components/CapsuleComponent.h"
#include "Player/ABP_Player.h"
#include "Player/FG_PlayerCharacter.h"
#include "Audio/FG_DA_Instrument.h"
#include "Audio/FG_InstrumentComponent.h"
#include "Audio/InstrumentChord.h"

void UFG_LocomotionAirJumpSubState::OnStatePush_Implementation()
{
	Super::OnStatePush_Implementation();
	bIsContinousJumpingPossible = true;

	UFG_LocomotionComponent* Locomotion = FGPlayerCharacter->LocomotionComp;
	const UFG_DA_JumpStats* JumpStats = FGPlayerCharacter->Stats->AirJumpStats;
	float Force = JumpStats->JumpForce;
	const float Timer = GetTimeSincePush();
	Force = FMath::Lerp(0.0f, Force, JumpStats->ForceCurve->GetFloatValue(Timer));
	Locomotion->JumpRAW(Force, JumpStats->RayDistance, JumpStats->DisableFloatingTime);

	FVector CutOffVector = FGPlayerCharacter->Collider->GetComponentVelocity();
	CutOffVector.Z = 0.0f;
	FGPlayerCharacter->Collider->SetPhysicsLinearVelocity(CutOffVector, false, NAME_None);

	OnStartAirJumping(FGPlayerCharacter);
	FGPlayerCharacter->GetABP()->Montage_Play(FGPlayerCharacter->JumpMontage, 1, EMontagePlayReturnType::MontageLength, 0, true);
	if (Context->InstrumentHandler != nullptr)
	{
		Context->InstrumentHandler->PlayChord(CurrentChord);
		CurrentChord = CurrentChord->Prev(0);
	}
}

void UFG_LocomotionAirJumpSubState::OnStatePop_Implementation()
{
	OnEndAirJumping(FGPlayerCharacter);
}

bool UFG_LocomotionAirJumpSubState::OnStateTick_Implementation(float DeltaTime)
{
	Super::OnStateTick_Implementation(DeltaTime);
	if (bIsContinousJumpingPossible == false)
	{
		return false;
	}

	UFG_DA_InputStats* InputStats = FGPlayerCharacter->Stats->InputStats;
	UFG_DA_PlayerStats* Stats = FGPlayerCharacter->Stats;

	if (InputStats->GetWasGlidingJustPressed())
	{
		bIsContinousJumpingPossible = false;
		Context->SubStateMachine->Push(Context->LocomotionAirborneSubState);
		FGPlayerCharacter->StateMachine->Push(FGPlayerCharacter->GlidingCoreState);
		return true;
	}

	const UFG_DA_JumpStats* JumpStats = FGPlayerCharacter->Stats->AirJumpStats;
	const FRichCurveKey LastKey = JumpStats->ForceCurve->FloatCurve.GetLastKey();

	bIsContinousJumpingPossible = InputStats->GetIsJumpingPressed();
	const float Timer = GetTimeSincePush();
	bIsContinousJumpingPossible &= !(Timer > LastKey.Time);

	if (bIsContinousJumpingPossible == true)
	{
		UFG_LocomotionComponent* Locomotion = FGPlayerCharacter->LocomotionComp;
		const FVector Input = InputStats->GetCameraNormalisedInputVector();
		if (!Input.IsNearlyZero())
		{
			Locomotion->Move(InputStats, FGPlayerCharacter->Stats->AirborneStats);
		}
		Locomotion->ApplyFriction(FGPlayerCharacter->Stats->AirborneStats);
		Locomotion->RotatePlayerRAW(FGPlayerCharacter->Stats->InputStats->GetCameraNormalisedInputVector(), 15.f);

		float Force = JumpStats->JumpForce;

		Force = FMath::Lerp(0.0f, Force, JumpStats->ForceCurve->GetFloatValue(Timer));

		Locomotion->JumpRAW(Force, JumpStats->RayDistance);
		OnContinousAirJumping(FGPlayerCharacter);
		return true;
	}
	else
	{
		//If you release jump, cut off some jump velocity and pop
		FVector CutOffVector = FGPlayerCharacter->Collider->GetComponentVelocity();
		CutOffVector.Z = CutOffVector.Z * Stats->JumpStats->JumpReleaseCutoffAmount;
		FGPlayerCharacter->Collider->SetPhysicsLinearVelocity(CutOffVector, false, NAME_None);
	}

	Context->SubStateMachine->Push(Context->LocomotionAirborneSubState);
	return true;
}

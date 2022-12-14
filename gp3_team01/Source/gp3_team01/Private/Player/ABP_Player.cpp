// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ABP_Player.h"
#include "Player/FG_PlayerCharacter.h"
#include "Player/FG_SFSM.h"
#include "Player/States/Core/FG_LocomotionPlayerState.h"
#include "Player/States/Locomotion/FG_LocomotionWallclimbSubState.h"

bool UABP_Player::IsClimbing() const
{
	const AFG_PlayerCharacter* Player = Cast<AFG_PlayerCharacter>(this->GetOwningActor());
	if (Player == nullptr)
	{
		return false;
	}
	if (Player->LocomotionCoreState == nullptr)
	{
		return false;
	}

	const UFG_SFSM* StateMachine = Player->LocomotionCoreState->SubStateMachine;
	UFG_LocomotionWallclimbSubState* State = Player->LocomotionCoreState->LocomotionWallclimbSubState;
	return StateMachine->TopIsEqual(State);
}

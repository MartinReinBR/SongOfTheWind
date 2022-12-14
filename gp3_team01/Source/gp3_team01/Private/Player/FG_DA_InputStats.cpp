// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/FG_DA_InputStats.h"
#include "TimerManager.h"

void UFG_DA_InputStats::SetRawInputVector(float x, float y)
{
	RawInputVector = { x, y, 0.0f };
}

void UFG_DA_InputStats::SetCameraForwardVector(FVector FwdVector)
{
	CameraForwardVector = FwdVector;
}

void UFG_DA_InputStats::SetCameraNormalisedInputVector(float x, float y)
{
	CameraNormalisedInputVector = { x, y, 0.0f };
}

void UFG_DA_InputStats::SetIsJumping(bool value)
{
	bJumpingPressedBuffer[0] = value;
}

void UFG_DA_InputStats::SetIsGliding(bool value)
{
	bGlidingPressedBuffer[0] = value;
}

FVector UFG_DA_InputStats::GetRawInputVector() const
{
	return RawInputVector * !IsBlocked();
}

FVector UFG_DA_InputStats::GetCameraForwardVector() const
{
	return CameraForwardVector * !IsBlocked();
}

FVector UFG_DA_InputStats::GetCameraNormalisedInputVector() const
{
	return CameraNormalisedInputVector;
}

bool UFG_DA_InputStats::GetIsJumpingPressed() const
{
	return bJumpingPressedBuffer[0] && !IsBlocked();
}

bool UFG_DA_InputStats::GetIsGlidingPressed() const
{
	return bGlidingPressedBuffer[0] && !IsBlocked();
}

bool UFG_DA_InputStats::GetWasJumpingJustPressed() const
{
	return (bJumpingPressedBuffer[0] && !bJumpingPressedBuffer[1]) && !IsBlocked();
}

bool UFG_DA_InputStats::GetWasGlidingJustPressed() const
{
	return (bGlidingPressedBuffer[0] && !bGlidingPressedBuffer[1]) && !IsBlocked();
}

bool UFG_DA_InputStats::GetWasJumpingJustReleased() const
{
	return (!bJumpingPressedBuffer[0] && bJumpingPressedBuffer[1]) && !IsBlocked();
}

bool UFG_DA_InputStats::GetWasGlidingJustReleased() const
{
	return (!bGlidingPressedBuffer[0] && bGlidingPressedBuffer[1]) && !IsBlocked();
}

void UFG_DA_InputStats::InvalidateBuffers()
{
	RawInputVector = FVector::ZeroVector;
	CameraForwardVector = FVector::ZeroVector;
	CameraNormalisedInputVector = FVector::ZeroVector;
	memset(bJumpingPressedBuffer, false, sizeof(bJumpingPressedBuffer));
	memset(bGlidingPressedBuffer, false, sizeof(bGlidingPressedBuffer));
}

void UFG_DA_InputStats::UpdateBuffers()
{
	bGlidingPressedBuffer[1] = bGlidingPressedBuffer[0];
	bJumpingPressedBuffer[1] = bJumpingPressedBuffer[0];
}

void UFG_DA_InputStats::BlockInput(FTimerManager& TimerManager, float Time)
{
	const auto Reactivate = [this]()
	{
		BlockInputTimer.Invalidate();
	};
	if (!IsBlocked()) {
		TimerManager.SetTimer(BlockInputTimer, Reactivate, Time, false);
	}
}

bool UFG_DA_InputStats::IsBlocked() const
{
	return BlockInputTimer.IsValid();
}

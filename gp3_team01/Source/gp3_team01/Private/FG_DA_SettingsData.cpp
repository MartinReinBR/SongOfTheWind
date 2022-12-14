// Fill out your copyright notice in the Description page of Project Settings.


#include "FG_DA_SettingsData.h"

bool UFG_DA_SettingsData::IsVSyncOn() const
{
    return bIsVsyncOn;
}

bool UFG_DA_SettingsData::IsMotionBlurOn() const
{
    return bIsMotionBlurOn;
}

void UFG_DA_SettingsData::SetVSyncOn(bool Value)
{
    bIsVsyncOn = Value;
    OnVsyncChange.Broadcast(Value);
}

void UFG_DA_SettingsData::SetMotionBlurOn(bool Value)
{
    bIsMotionBlurOn = Value;
    OnMotionBlurChange.Broadcast(Value);
}

int32 UFG_DA_SettingsData::GetFixedFrameRate() const
{
    return GEngine->FixedFrameRate;
}

void UFG_DA_SettingsData::SetFixedFrameRate(int32 FrameRate) const
{
    GEngine->bSmoothFrameRate = false;
    if (FrameRate != 0)
    {
        
        GEngine->bUseFixedFrameRate = true;
        GEngine->FixedFrameRate = FrameRate;
        return;
    }
}

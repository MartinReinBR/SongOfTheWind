// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FG_DA_SettingsData.generated.h"

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBooleanGraphicSettingChanged, bool, bIsEnabled);

UCLASS(Blueprintable)
class GP3_TEAM01_API UFG_DA_SettingsData : public UDataAsset
{
	GENERATED_BODY()

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Audio)
	float MasterVolume = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Audio)
	float MusicVolume = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Audio)
	float SFXVolume = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Audio)
	float InstrumentVolume = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Audio)
	float HarpVolume = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Audio)
	float KaguraBellsVolume = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Audio)
	float FluteVolume = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Audio)
	float HandpanVolume = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Audio)
	float ChimesVolume = 1.0f;

	UFUNCTION(BlueprintPure)
	bool IsVSyncOn() const;

	UFUNCTION(BlueprintPure)
	bool IsMotionBlurOn() const;

	UFUNCTION(BlueprintCallable)
	void SetVSyncOn(bool Value);

	UFUNCTION(BlueprintCallable)
	void SetMotionBlurOn(bool Value);

	UFUNCTION(BlueprintPure)
	int32 GetFixedFrameRate() const;

	UFUNCTION(BlueprintCallable)
	void SetFixedFrameRate(int32 FrameRate) const;

	UPROPERTY(BlueprintAssignable)
	FBooleanGraphicSettingChanged OnVsyncChange;

	UPROPERTY(BlueprintAssignable)
	FBooleanGraphicSettingChanged OnMotionBlurChange;

private:
	bool bIsVsyncOn = false;
	bool bIsMotionBlurOn = false;
};

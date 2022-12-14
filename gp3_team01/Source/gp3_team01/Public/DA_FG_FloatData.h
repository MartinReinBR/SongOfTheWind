// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_FG_FloatData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class GP3_TEAM01_API UDA_FG_FloatData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Data = 0;
};

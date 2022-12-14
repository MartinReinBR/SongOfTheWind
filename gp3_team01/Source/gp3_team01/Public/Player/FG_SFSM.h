// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FG_SFSM.generated.h"

class IFG_State;

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GP3_TEAM01_API UFG_SFSM : public UObject
{
	GENERATED_BODY()

public:
	using StateCollection = TArray<TScriptInterface<IFG_State>>;

	UFG_SFSM();

public:
	// Called every frame
	UFUNCTION(BlueprintCallable)
	void OnStateMachineTick(float DeltaTime);
	
	UFUNCTION(BlueprintCallable)
	void Push(TScriptInterface<IFG_State> State);

	UFUNCTION(BlueprintCallable)
	void Pop();

	// Returns true if popping was successful, otherwise false
	UFUNCTION(BlueprintCallable)
	bool TryPop();

	UFUNCTION(BlueprintCallable)
	void Remove(TScriptInterface<IFG_State> State);

	UFUNCTION(BlueprintPure)
	bool Contains(TScriptInterface<IFG_State> State) const;

	UFUNCTION(BlueprintPure)
	int64 Count(TScriptInterface<IFG_State> State) const;

	UFUNCTION(BlueprintPure)
	bool TopIsEqual(TScriptInterface<IFG_State> State) const;

	// Returns true if target State has been reached, otherwise false (I.e., empty stack, stack doesn't contain state, etc.)
	UFUNCTION(BlueprintCallable)
	bool TryPopUntil(TScriptInterface<IFG_State> State);

	UFUNCTION(BlueprintCallable)
	void Clear();

	UFUNCTION(BlueprintPure)
	bool IsEmpty() const;

private:
	// 
	UObject* Peek() const;

	UPROPERTY()
	TArray<TScriptInterface<IFG_State>> StateStack;
	
	// TODO: Revise the decision of blocking popping during ticking
	// TODO: Implement queue-ing the pops/pushes during ticking
	bool bIsPoppingAllowed = false;
};

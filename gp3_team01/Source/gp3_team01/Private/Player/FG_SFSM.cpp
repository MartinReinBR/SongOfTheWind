// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/FG_SFSM.h"
#include "Player/FG_State.h"

inline void DrawOnScreenError(const FString& Msg, const FColor Color, const float Time)
{
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, Time, Color, Msg);
}

void DrawStackContentDebug(const UFG_SFSM::StateCollection& StateStack, float DeltaTime)
{
	const UObject* Object = StateStack.Last().GetObject();
	FString Name = Object->GetFName().ToString();
	DrawOnScreenError(Name, FColor::Green, DeltaTime);
	for (auto& Element : StateStack)
	{
		if (Element != StateStack.Last())
		{
			Name = Element.GetObject()->GetFName().ToString();
			DrawOnScreenError(Name, FColor::Magenta, DeltaTime);
		}

	}
}

// Sets default values for this component's properties
UFG_SFSM::UFG_SFSM()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.

	// ...
}


// Called every frame
void UFG_SFSM::OnStateMachineTick(float DeltaTime)
{
	DrawStackContentDebug(StateStack, DeltaTime);

	const bool StackHasElements = StateStack.Num() != 0;
	if (StackHasElements)
	{
		// Make copy, cause when state gets popped, reference is saying bye bye : )
		bIsPoppingAllowed = false;
		UObject* Current = this->Peek();
		bool StackStillHasElements = StateStack.Num() != 0;
		while (StackStillHasElements && IFG_State::Execute_OnStateTick(Current, DeltaTime) == false)
		{
			bIsPoppingAllowed = true;
			this->Pop(); // Pop latest element on stack

			StackStillHasElements = StateStack.Num() != 0;
			if (StackStillHasElements)
			{
				Current = this->Peek();
				IFG_State::Execute_OnStateEnter(Current);
			}
			bIsPoppingAllowed = false;
		}
		bIsPoppingAllowed = true;
	}
	// ...
}

void PopUnsafe(UFG_SFSM::StateCollection& StateStack)
{
	UObject* State = StateStack.Last().GetObject();
	IFG_State::Execute_OnStateExit(State);
	IFG_State::Execute_OnStatePop(State);
	StateStack.Pop();

	if (StateStack.Num() != 0)
	{
		State = StateStack.Last().GetObject();
		IFG_State::Execute_OnStateEnter(State);
	}
}

void UFG_SFSM::Pop()
{
	if (bIsPoppingAllowed == false) 
	{
		DrawOnScreenError(TEXT("ERROR: CANNOT POP IN STATE TICK!"), FColor::Red, 2.0f);
		return;
	}
	if (!IsEmpty())
	{
		PopUnsafe(StateStack);
	}
}

bool UFG_SFSM::TryPop()
{
	if (bIsPoppingAllowed == false || IsEmpty())
	{
		return false;
	}
	PopUnsafe(StateStack);
	return true;
}

bool UFG_SFSM::Contains(TScriptInterface<IFG_State> State) const
{
	const auto Predicate = [&State](const TScriptInterface<IFG_State>& Element) { return Element.GetObject() == State.GetObject(); };
	return StateStack.ContainsByPredicate(Predicate);
}

int64 UFG_SFSM::Count(TScriptInterface<IFG_State> State) const
{
	const auto Predicate = [&State](const TScriptInterface<IFG_State>& Element) { return Element.GetObject() == State.GetObject(); };
	const uint64 Num = StateStack.FilterByPredicate(Predicate).Num();
	return Num;
}

bool UFG_SFSM::TopIsEqual(TScriptInterface<IFG_State> State) const
{
	const UObject* LastElement = this->Peek();
	return LastElement == State.GetObject();
}

bool UFG_SFSM::TryPopUntil(TScriptInterface<IFG_State> State)
{
	if (Contains(State))
	{
		return false;
	}
	const auto IsSame = [](const TScriptInterface<IFG_State>& lhs, const UObject* rhs) { return lhs.GetObject() == rhs; };
	const UObject* Current = this->Peek();
	while (!IsSame(State, Current)) 
	{
		this->Pop();
		Current = this->Peek();
	}
	return true;
}

// Simulate a full on popping
void UFG_SFSM::Clear()
{ 
	if (bIsPoppingAllowed == false) 
	{
		DrawOnScreenError(TEXT("ERROR: CANNOT CLEAR IN STATE TICK!"), FColor::Red, 2.0f);
		return;
	}

	while (!IsEmpty())
	{
		this->Pop();
	}
}

bool UFG_SFSM::IsEmpty() const
{
	return StateStack.Num() == 0;
}

UObject* UFG_SFSM::Peek() const
{
	return StateStack.Last().GetObject();
}

void UFG_SFSM::Push(TScriptInterface<IFG_State> State)
{
	UObject* Object = State.GetObject();
	//const bool IsImplementingInterface = Object->GetClass()->ImplementsInterface(IFG_State::UClassType::StaticClass());
	const bool IsInterfaceValid = State.GetInterface() != nullptr;
	if (IsInterfaceValid)
	{
		IFG_State* Base = Cast<IFG_State>(Object);
		StateStack.Push({ Object });
		IFG_State::Execute_OnStatePush(Object);
		IFG_State::Execute_OnStateEnter(Object);
	}
}

void UFG_SFSM::Remove(TScriptInterface<IFG_State> State)
{
	if (this->TopIsEqual(State))
	{
		this->Pop();
		return;
	}

	int32 Index = StateStack.IndexOfByPredicate([&State](const TScriptInterface<IFG_State>& Element) { return Element.GetObject() == State.GetObject(); });
	if (Index != INDEX_NONE)
	{
		UObject* State = StateStack[Index].GetObject();
		IFG_State::Execute_OnStatePop(State);
		StateStack.RemoveAt(Index, 1, false);
	}
}


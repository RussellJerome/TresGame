// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresBTInterface_DecoratorNativeBase.generated.h"

UCLASS()
class TRESGAME_API ATresBTInterface_DecoratorNativeBase : public AActor
{
	GENERATED_BODY()
public:	
	UFUNCTION(BlueprintPure)
	bool IsDecoratorFunctionNative(class AActor* SelfActor, class AActor* TargetActor, const FVector& TargetDestination, float valueA, float valueB) { return false; };
};

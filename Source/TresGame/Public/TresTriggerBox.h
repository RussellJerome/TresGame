// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "TresTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresTriggerBox")
	void SetAreaClass(class UShapeComponent* Component, class UClass* AreaClass) {};

	UFUNCTION(BlueprintCallable, Category = "TresTriggerBox")
	FString GetWorldMainFlagNameString() { return FString::FString(); };

	//UFUNCTION(BlueprintCallable, Category = "TresTriggerBox")
	//class UTresStaticMeshComponent* GetDebugStaticMeshComponent() { return nullptr; };
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TresGame.h"
#include "TresGumiShipPawnBase.generated.h"

UCLASS()
class TRESGAME_API ATresGumiShipPawnBase : public APawn
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipPawnBase")
	class UTresRootComponent* m_pRootComponent;

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipPawnBase")
	void SetRootCollisionEnable(bool bIn) {};

	UFUNCTION(BlueprintPure, Category = "TresGumiShipPawnBase")
	FRotator GetRotationAmout() { return FRotator::FRotator(); };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipPawnBase")
	FRotator GetRelativeRotation() { return FRotator::FRotator(); };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipPawnBase")
	FVector GetRelativeLocation() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipPawnBase")
	FRotator GetOldRotation() { return FRotator::FRotator(); };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipPawnBase")
	FVector GetOldLocation() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipPawnBase")
	FVector GetMovementAmout() { return FVector::FVector(); };
};

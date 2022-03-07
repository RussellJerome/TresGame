// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresLocomotionDefinitionBase.generated.h"

UENUM(BlueprintType)
enum ETresLocomotionMode
{
/*	Forward = 0,
	Omnidirectional = 1,*/
	ETresLocomotionMode_MAX = 2 UMETA(Hidden)
};

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresLocomotionDefinitionBase : public UTresStateBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	float m_MinSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	float m_MaxSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	float m_Acceleration;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	FRotator m_MaxRotationSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	bool m_bUseAngularAcceleration;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	float m_AngularAcceleration;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	bool m_bRotInterpolation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	float m_RotInterpSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	TEnumAsByte<ETresLocomotionMode> m_Mode;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	float m_CorridorCheckInterval;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	int m_SmoothSampleSize;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	TEnumAsByte<EMovementMode> m_EntryMovementMode;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	TEnumAsByte<EMovementMode> m_MovementMode;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	TEnumAsByte<EMovementMode> m_ExitMovementMode;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	int m_StateMachineNumber;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLocomotionDefinitionBase")
	class UClass* m_FilterClass;
};

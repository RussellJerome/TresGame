// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_WeaponAttack.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_WeaponAttack : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_WeaponAttack")
	FBlackboardKeySelector m_Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_WeaponAttack")
	FBlackboardKeySelector m_Destination;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_WeaponAttack")
	bool m_bUseBBAttackDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_WeaponAttack")
	FBlackboardKeySelector m_BBAttackDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_WeaponAttack")
	class UClass* m_AttackDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_WeaponAttack")
	bool m_bValidateLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_WeaponAttack")
	bool m_bValidateOrientation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_WeaponAttack")
	bool m_bValidateExecution;
};

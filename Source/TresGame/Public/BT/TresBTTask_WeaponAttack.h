// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_WeaponAttack.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_WeaponAttack : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_WeaponAttack")
	FBlackboardKeySelector m_Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_WeaponAttack")
	FBlackboardKeySelector m_Destination;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_WeaponAttack")
	bool m_bUseBBAttackDefinitionWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_WeaponAttack")
	FBlackboardKeySelector m_BBAttackDefinitionWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_WeaponAttack")
	class UClass* m_AttackDefinitionWeapon;
};

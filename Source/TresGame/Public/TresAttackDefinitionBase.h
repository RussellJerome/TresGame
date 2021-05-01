// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAttackDefinitionBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAttackDefinitionBase : public UTresActionDefinitionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	TEnumAsByte<ETresAttackDefinition> m_AttackType;
	FName m_AttackName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_MinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_MaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bMinHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_MinHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bMaxHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_MaxHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_EQSRangeRefinement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bDirectPathRequired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bLineOfSightRequired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	class UEnvQuery* m_ActionEQSQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bTargetRequired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bSelfInViewport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bValidateYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_YawOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_YawTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bValidatePitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_PitchOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_PitchTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bEditNpcAIInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	struct FTresFNpcAIAttackDefInfo m_NpcAIInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bIndirectAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	FName m_AttackerDataID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	TArray<FName> m_AttackedDataID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_AttackDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bCanMultiHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_SuspendTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_MissScore;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAttackDefinitionBase.generated.h"

UENUM(BlueprintType)
enum ETresAttackDefinition
{
	/*Unknown = 0,
	Melee = 1,
	Ranged = 2,
	Dash = 3,
	Jump = 4,
	Custom = 5,*/
	ETresAttackDefinition_MAX = 6 UMETA(Hidden)
};

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAttackDefinitionBase : public UTresActionDefinitionBase
{
	GENERATED_BODY()
public:
	/*The Attack Type*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	TEnumAsByte<ETresAttackDefinition> m_AttackType;
	
	/*The name of the Attack*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	FName m_AttackName;

	/*Allows you to enable the Minimum Distance*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bMinDistance;

	/*The Minimum Distance*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase", Meta = (EditCondition = "m_bMinDistance"))
	float m_MinDistance;

	/*Allows you to enable the Maximum Distance*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bMaxDistance;

	/*The Maximum Distance*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase", Meta = (EditCondition = "m_bMaxDistance"))
	float m_MaxDistance;

	/*Allows you to enable the Minimum Height*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bMinHeight;

	/*The Minimum Height*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase", Meta = (EditCondition = "m_bMinHeight"))
	float m_MinHeight;

	/*Allows you to enable the Maximum Height*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bMaxHeight;

	/*The Maximum Height*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase", Meta = (EditCondition = "m_bMaxHeight"))
	float m_MaxHeight;

	/*The range of EQS Refinement*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_EQSRangeRefinement;

	/*Whether or not a direct path is required*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bDirectPathRequired;

	/*Whether or not a line of sight is required*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bLineOfSightRequired;

	/*The Action EQS Query*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	class UEnvQuery* m_ActionEQSQuery;

	/*Whether or not Target is required*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bTargetRequired;

	/*Whether or not Self in Viewport*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bSelfInViewport;

	/*Whether or not to Validate the Yaw*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bValidateYaw;

	/*Offset of the Yaw*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_YawOffset;

	/*Tolerance of the Yaw*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_YawTolerance;

	/*Whether or not to Validate the Pitch*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bValidatePitch;

	/*Offset of the Pitch*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_PitchOffset;

	/*Tolerance of the Pitch*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_PitchTolerance;

	/*Whether or not to Edit NPC AI Info*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bEditNpcAIInfo;

	/*The NPC AI Info*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase", Meta = (EditCondition = "m_bEditNpcAIInfo"))
	struct FTresFNpcAIAttackDefInfo m_NpcAIInfo;

	/*Whether or not its an Indirect Attack*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bIndirectAttack;

	/*The Attacker Data ID*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	FName m_AttackerDataID;

	/*The Attacked Data ID*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	TArray<FName> m_AttackedDataID;

	/*The duration of the Attack*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_AttackDuration;

	/*Whether or not if it can Multi Hit*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	bool m_bCanMultiHit;

	/*Amount to Suspend Time*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_SuspendTime;

	/*The Miss Score*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttackDefinitionBase")
	float m_MissScore;
};

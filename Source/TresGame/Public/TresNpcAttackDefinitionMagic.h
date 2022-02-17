// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresGame.h"
#include "TresNpcAttackDefinitionMagic.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresNpcAttackDefinitionMagic : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcAttackDefinitionMagic")
		class UClass* m_AttackAnimData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcAttackDefinitionMagic")
		TEnumAsByte<ETresCommandKind> m_CommandKind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcAttackDefinitionMagic")
		float m_ShotPitchMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcAttackDefinitionMagic")
		float m_ShotPitchMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcAttackDefinitionMagic")
		bool m_bEnableStartYawMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcAttackDefinitionMagic")
		float m_MinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcAttackDefinitionMagic")
		float m_MaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcAttackDefinitionMagic")
		UEnvQuery *m_ActionEQSQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcAttackDefinitionMagic")
		FTresFNpcAIAttackDefInfo m_NpcAIInfo;


};

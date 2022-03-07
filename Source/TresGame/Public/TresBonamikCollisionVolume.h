// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EngineData.h"
#include "TresVolume.h"
#include "TresBonamikCollisionVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresBonamikCollisionVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikCollisionVolume")
	TArray<ESQEX_ObjectType> m_MonitoringObjectTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikCollisionVolume")
	TArray<FString> m_Groups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikCollisionVolume")
	TArray<class AActor*> m_BonamikActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikCollisionVolume")
	bool m_ControlBonamikCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikCollisionVolume")
	bool m_ControlBonamikWeightAndEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikCollisionVolume")
	bool m_AllowMultipleOverlaps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikCollisionVolume")
	bool m_FixForGigasMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikCollisionVolume")
	bool m_DisableHighFPSEvaluation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikCollisionVolume")
	TArray<class USkinnedMeshComponent*> m_ReferencedComponets;
};

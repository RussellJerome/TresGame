// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGame.h"
#include "TresLevelEntityManager.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresLevelEntityManager : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityManager")
	TArray<class UTresLevelEntityGroup*> m_Groups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityManager")
	TArray<struct FTresEncountSpawnRequest> m_EncountSpawnRequests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityManager")
	TArray<class ATresPawnBase*> m_RemoveActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityManager")
	TArray<class ATresLevelEntity*> m_PendingSpawn;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Editor/UnrealEdEngine.h"
#include "TresUnrealEdEngine.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAMEEDITOR_API UTresUnrealEdEngine : public UUnrealEdEngine
{
	GENERATED_BODY()

	UTresUnrealEdEngine(const FObjectInitializer & ObjectInitializer);

private:
	UPROPERTY(Config)
	bool m_SpawnByLevelEntity;

	UPROPERTY(Config)
	bool m_SpawnByEnemySetInstance;

	UPROPERTY(Config)
	bool m_SpawnMatineePreviewActor;
	
};

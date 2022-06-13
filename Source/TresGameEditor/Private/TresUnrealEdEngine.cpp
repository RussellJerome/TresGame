// Fill out your copyright notice in the Description page of Project Settings.

#include "TresUnrealEdEngine.h"
#include "Misc/ConfigCacheIni.h"

UTresUnrealEdEngine::UTresUnrealEdEngine(const FObjectInitializer & ObjectInitializer)
{
	GConfig->GetBool(TEXT("/Script/TresGameEditor.TresUnrealEdEngine"), TEXT("m_SpawnByLevelEntity"), m_SpawnByLevelEntity, GEngineIni);
	GConfig->GetBool(TEXT("/Script/TresGameEditor.TresUnrealEdEngine"), TEXT("m_SpawnByEnemySetInstance"), m_SpawnByEnemySetInstance, GEngineIni);
	GConfig->GetBool(TEXT("/Script/TresGameEditor.TresUnrealEdEngine"), TEXT("m_SpawnMatineePreviewActor"), m_SpawnMatineePreviewActor, GEngineIni);
}

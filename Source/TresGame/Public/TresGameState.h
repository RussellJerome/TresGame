// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "TresGameState.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGameState : public AGameStateBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameState")
	class ATresSceneManager* m_SceneManager;

	//class ATresVFXManager* m_VFXManager;
	//class ATresEmitterPool* m_EmitterPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameState")
	class UTresPhysMatEffectAsset* m_PhysMatEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameState")
	class ATresPrizeMan* m_PrizeMan;

	//class ATresCollisionManager* m_CollisionManager;
	//class ATresPhysObjMan* m_PhysObjMan;

	//class ATresVFXManager* GetVFXManager() { return nullptr; };
	//class ASQEX_VFXManager* GetSQEX_VFXManager() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresGameState")
	class ATresSceneManager* GetSceneManager() { return nullptr; };
};

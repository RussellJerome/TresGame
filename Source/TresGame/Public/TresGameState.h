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

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameState")
	//class ATresVFXManager* m_VFXManager;
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameState")
	//class ATresEmitterPool* m_EmitterPool;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameState")
	//class UTresPhysMatEffectAsset* m_PhysMatEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameState")
	class ATresPrizeMan* m_PrizeMan;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameState")
	//class ATresCollisionManager* m_CollisionManager;
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameState")
	//class ATresPhysObjMan* m_PhysObjMan;

	//UFUNCTION(BlueprintPure, Category = "TresGameState")
	//class ATresVFXManager* GetVFXManager() { return nullptr; };
	
	//UFUNCTION(BlueprintPure, Category = "TresGameState")
	//class ASQEX_VFXManager* GetSQEX_VFXManager() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresGameState")
	class ATresSceneManager* GetSceneManager() { return nullptr; };
};

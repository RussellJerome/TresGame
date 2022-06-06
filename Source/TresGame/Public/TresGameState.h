#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "TresGameState.generated.h"

class ATresSceneManager;
class ATresVFXManager;
class ATresPhysObjMan;
class ATresPrizeMan;
class ATresEmitterPool;
class UTresPhysMatEffectAsset;
class ATresCollisionManager;
class ASQEX_VFXManager;

UCLASS()
class ATresGameState : public AGameStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresSceneManager* m_SceneManager;
    
    UPROPERTY()
    ATresVFXManager* m_VFXManager;
    
    UPROPERTY(DuplicateTransient, Transient)
    ATresEmitterPool* m_EmitterPool;
    
    UPROPERTY(DuplicateTransient, Transient)
    UTresPhysMatEffectAsset* m_PhysMatEffects;
    
    UPROPERTY(DuplicateTransient, Transient)
    ATresPrizeMan* m_PrizeMan;
    
    UPROPERTY(DuplicateTransient, Transient)
    ATresCollisionManager* m_CollisionManager;
    
    UPROPERTY(DuplicateTransient, Transient)
    ATresPhysObjMan* m_PhysObjMan;
    
public:
    ATresGameState();
    UFUNCTION(BlueprintCallable)
    ATresVFXManager* GetVFXManager();
    
    UFUNCTION(BlueprintCallable)
    ASQEX_VFXManager* GetSQEX_VFXManager();
    
    UFUNCTION(BlueprintCallable)
    ATresSceneManager* GetSceneManager();
    
};


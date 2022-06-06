#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_dw402.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class UTresActionDefinitionBase;

UCLASS()
class ATresEnemyPawn_e_dw402 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UParticleSystemComponent* m_ShadowSpawnEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ShadowDiveEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_HeadEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_RiseEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ShadowSpawnEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ShadowDiveEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HeadEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_RiseEffData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_NotAttackLockonName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackLockonName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_LockOnRange;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bCommonDie;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HitTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresActionDefinitionBase> m_EventActionData;
    
    UPROPERTY()
    bool m_IsShiftE3Die;
    
    UPROPERTY()
    float m_HitTimer;
    
public:
    ATresEnemyPawn_e_dw402();
    UFUNCTION(BlueprintCallable)
    void ShiftE3Die();
    
    UFUNCTION(BlueprintCallable)
    float GetHitTimer();
    
};


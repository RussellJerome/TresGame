#pragma once
#include "CoreMinimal.h"
#include "TresPawnBase.h"
#include "TresEnemyPawn_e_ex363_RiseRushDurkEffect.generated.h"

class ATresEnemyPawn_e_ex363;
class UParticleSystem;
class UParticleSystemComponent;
class AActor;

UCLASS(HideDropdown)
class ATresEnemyPawn_e_ex363_RiseRushDurkEffect : public ATresPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ArielComboParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AttackSignParticle;
    
    UPROPERTY(EditAnywhere)
    float m_FloorOffsetZ;
    
    UPROPERTY(EditAnywhere)
    bool m_EffectOnGround;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex363* m_MyParent;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_SignProjectile;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_AirParticle;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> m_Target;
    
public:
    ATresEnemyPawn_e_ex363_RiseRushDurkEffect();
};


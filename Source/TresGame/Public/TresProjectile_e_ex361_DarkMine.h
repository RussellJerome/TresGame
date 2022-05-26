#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex361_DarkMine.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex361_DarkMine : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_DarkMineBootEff;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMineBombDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMineBombTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMineBombTime2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMineBombOmenTime2;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsExplosion: 1;
    
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_DarkMineBootEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AtkUpdateInterval;
    
    ATresProjectile_e_ex361_DarkMine();
};


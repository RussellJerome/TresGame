#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex361_DarkHand_ShockWave.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex361_DarkHand_ShockWave : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_ShockWaveEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AkkColLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AkkColFinLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnAkkDist;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackColName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AtkUpdateInterval;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsCenterDistShutdown: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CenterDistShutdown;
    
    ATresProjectile_e_ex361_DarkHand_ShockWave();
};


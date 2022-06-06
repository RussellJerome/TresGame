#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "EX359_BeamOnTimeInfoSet.h"
#include "EX359_LaserWaveInfoSet.h"
#include "TresAttack9_e_ex359_FinalBrake_HeavyRain.generated.h"

class UCurveFloat;
class ATresProjectile_e_ex359_BeamSpawner;
class ATresProjectile_e_ex359_LaserSpawner;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack9_e_ex359_FinalBrake_HeavyRain : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex359_LaserSpawner> m_LaserProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_LaserWaveInfoSet m_LaserInfoSet;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex359_BeamSpawner> m_BeamProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_BeamOnTimeInfoSet m_BeamOnTimeInfoSet;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_AreaProjectileClasss;
    
    UPROPERTY()
    ATresProjectileBase* m_AreaProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_AreaParticleSizeCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCenterProjStartWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_CenterProjectileClasss;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCenterParticleLifeTime;
    
    UTresAttack9_e_ex359_FinalBrake_HeavyRain();
};


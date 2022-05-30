#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectile_e_ex353_Base.h"
#include "TresEnemyEx353ThornBeamAfterHitInfo.h"
#include "TresEnemyEx353ThornBeamProjectileInfo.h"
#include "TresProjectile_e_ex353_ThornBeam.generated.h"

class UParticleSystem;
class UCurveVector;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class ATresProjectile_e_ex353_ThornBeam : public ATresProjectile_e_ex353_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex353_Base> m_ThornBeamBlowProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ThornBeamCatchEff;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_CatchCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bInvisibleMissCatch: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisableAttackColMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StopTipMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimForwardShieldDist;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ThornBeamCatchCmp;
    
    UPROPERTY()
    FTresEnemyEx353ThornBeamProjectileInfo m_ThornBeamProjectileInfo;
    
    UPROPERTY()
    FTresEnemyEx353ThornBeamAfterHitInfo m_AfterHitInfo;
    
    ATresProjectile_e_ex353_ThornBeam();
};


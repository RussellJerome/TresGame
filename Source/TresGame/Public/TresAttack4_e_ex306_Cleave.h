#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "WaveOneCollInfo_e_ex310.h"
#include "TresAttack4_e_ex306_Cleave.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex306_Cleave : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxLoopCoount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveOneCollInfo_e_ex310 m_OneCollInfo;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ProjectileSpawnBoneName;
    
    UPROPERTY(EditAnywhere)
    bool m_bAimTarget;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_ProjectileRot;
    
    UTresAttack4_e_ex306_Cleave();
};


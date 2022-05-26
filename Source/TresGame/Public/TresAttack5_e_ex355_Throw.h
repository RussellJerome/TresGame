#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "DeviationShotInfo_e_ex355.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack5_e_ex355_Throw.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack5_e_ex355_Throw : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ProjectileSpawnBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vProjectileSpawnOffset;
    
    UPROPERTY(EditAnywhere)
    bool m_bAimTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAimTargetMaxYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAimTargetMinPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAimTargetMaxPitch;
    
    UPROPERTY(EditAnywhere)
    FDeviationShotInfo_e_ex355 m_DeviationShotInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_ProjectileRot;
    
    UTresAttack5_e_ex355_Throw();
};


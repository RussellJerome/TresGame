#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionMelee.h"
#include "WaveSet_e_ex310.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack3_e_ex306_Swing.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex306_Swing : public UTresAttackDefinitionMelee {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FWaveSet_e_ex310 m_WaveSet;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ProjectileSpawnBoneName;
    
    UPROPERTY(EditAnywhere)
    bool m_bAimTarget;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_ProjectileRot;
    
    UTresAttack3_e_ex306_Swing();
};


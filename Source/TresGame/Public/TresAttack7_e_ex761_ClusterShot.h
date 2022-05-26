#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex761_ShotBase.h"
#include "TresAttack7_e_ex761_ClusterShot.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack7_e_ex761_ClusterShot : public UTresAttack_e_ex761_ShotBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSpreadRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileIntervalDistance;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableProjectileHitSync: 1;
    
public:
    UTresAttack7_e_ex761_ClusterShot();
};


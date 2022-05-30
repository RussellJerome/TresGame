#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex305_ClusterShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex305_ClusterShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_ShotNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ExplosionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ExplosionDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetAimMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetAimMaxDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DestinationAimMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DestinationAimMaxDist;
    
public:
    UTresAttack3_e_ex305_ClusterShot();
};


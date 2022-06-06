#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EX354_ClusterShotInfo.h"
#include "TresAttack3_e_ex354_ClusterShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex354_ClusterShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bActorAim;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAimTargetFloor;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSpreadOnLand;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileSpreadRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileSpreadMargin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxAimAngleFromWeapon;
    
    UPROPERTY(EditDefaultsOnly)
    FEX354_ClusterShotInfo m_ClusterShotInfo;
    
public:
    UTresAttack3_e_ex354_ClusterShot();
};


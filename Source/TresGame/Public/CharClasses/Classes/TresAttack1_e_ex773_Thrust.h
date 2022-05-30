#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex773_Thrust.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex773_Thrust : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_OverRunDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtDist;
    
    UPROPERTY(EditDefaultsOnly)
    float HitRootTransScaleXY;
    
    UPROPERTY(EditDefaultsOnly)
    float HitTargetLocationRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool bHitDirFront;
    
public:
    UTresAttack1_e_ex773_Thrust();
};


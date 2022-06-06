#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack9_e_ex054_VolcanoEruptionCircle.generated.h"

UCLASS(HideDropdown)
class UTresAttack9_e_ex054_VolcanoEruptionCircle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_FireNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_FireLoopNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AimStDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AimDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AimRangeMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AimRangeMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_GravityScaleMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_GravityScaleMax;
    
public:
    UTresAttack9_e_ex054_VolcanoEruptionCircle();
};


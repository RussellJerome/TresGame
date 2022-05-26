#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack6_e_ex361_DarkAuraKabutowariFinish.generated.h"

UCLASS(HideDropdown)
class UTresAttack6_e_ex361_DarkAuraKabutowariFinish : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_TargetThunderNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ThunderOmenTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TargetThunderInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TargetThunderStTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_NotTargetThunderNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NotTargetThunderInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NotTargetThunderStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NotTargetThunderMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NotTargetThunderMaxDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WarpOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FallSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WarpDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ChangeLightTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DecalStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DecalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FallMoveRate;
    
public:
    UTresAttack6_e_ex361_DarkAuraKabutowariFinish();
};


#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex361_DarkHandDashSlash.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex361_DarkHandDashSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HaloMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HaloMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HaloMoveRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HaloLimitPitch;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DashLoopSlashRootMotionScale;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_LoopNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SkipInterp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverRunDist;
    
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bBodyPushOff: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bModifyViewPos: 1;
    
    UTresAttack4_e_ex361_DarkHandDashSlash();
};


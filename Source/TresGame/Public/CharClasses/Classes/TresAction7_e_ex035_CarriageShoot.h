#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAction7_e_ex035_CarriageShoot.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAction7_e_ex035_CarriageShoot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxShotCount;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_CarriageFixBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimDataList[3];
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bBeginWithTurn;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bAttachEndMotion;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fEndMotionEnableGravityTime;
    
    UTresAction7_e_ex035_CarriageShoot();
};


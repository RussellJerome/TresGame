#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex305_NormalShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex305_NormalShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_bShotDirCorrection;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CkMyRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CkTgtRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CkDisableTgtDist;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_bShotDirCorrectionDisp;
    
public:
    UTresAttack1_e_ex305_NormalShot();
};


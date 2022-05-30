#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex701_FlameBulletBase.h"
#include "TresShotParam_e_ex701_Attack9.h"
#include "TresAttack9_e_ex701_FlameBulletContinuity.generated.h"

UCLASS(HideDropdown)
class UTresAttack9_e_ex701_FlameBulletContinuity : public UTresAttack_e_ex701_FlameBulletBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresShotParam_e_ex701_Attack9> m_ShotParamList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndHeightOffset;
    
public:
    UTresAttack9_e_ex701_FlameBulletContinuity();
};


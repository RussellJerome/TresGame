#pragma once
#include "CoreMinimal.h"
#include "TresAttack1_e_ex358_JinraiBase.h"
#include "JinraiRootMotionScaleParam_e_ex358.h"
#include "TresAttack1_e_ex358_JinraiFirst.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex358_JinraiFirst : public UTresAttack1_e_ex358_JinraiBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableAttackHitResetRootMotionScale: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FJinraiRootMotionScaleParam_e_ex358 m_MinRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FJinraiRootMotionScaleParam_e_ex358 m_MaxRootMotionScaleParam;
    
public:
    UTresAttack1_e_ex358_JinraiFirst();
};


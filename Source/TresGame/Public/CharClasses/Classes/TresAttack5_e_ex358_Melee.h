#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex358_Base.h"
#include "MeleeRootMotionScaleParam_e_ex358.h"
#include "TresAttack5_e_ex358_Melee.generated.h"

UCLASS(HideDropdown)
class UTresAttack5_e_ex358_Melee : public UTresAttack_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableAttackHitResetRootMotionScale: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FMeleeRootMotionScaleParam_e_ex358 m_MinRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FMeleeRootMotionScaleParam_e_ex358 m_MaxRootMotionScaleParam;
    
public:
    UTresAttack5_e_ex358_Melee();
};


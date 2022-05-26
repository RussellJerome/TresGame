#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex761_Base.h"
#include "MeleeRootMotionScaleParam_e_ex761.h"
#include "TresAttack_e_ex761_MeleeBase.generated.h"

UCLASS(HideDropdown)
class UTresAttack_e_ex761_MeleeBase : public UTresAttack_e_ex761_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableTargetDistance2D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DefaultRootMotionScale;
    
    UPROPERTY(EditDefaultsOnly)
    FMeleeRootMotionScaleParam_e_ex761 m_MinRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FMeleeRootMotionScaleParam_e_ex761 m_MaxRootMotionScaleParam;
    
public:
    UTresAttack_e_ex761_MeleeBase();
};


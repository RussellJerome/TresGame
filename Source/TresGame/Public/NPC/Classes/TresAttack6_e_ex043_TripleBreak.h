#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "MeleeRootMotionScaleParam_e_ex043.h"
#include "ActionCancelParam_e_ex043.h"
#include "TresAttack6_e_ex043_TripleBreak.generated.h"

UCLASS(HideDropdown)
class UTresAttack6_e_ex043_TripleBreak : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fDefaultRootMotionScale;
    
    UPROPERTY(EditDefaultsOnly)
    FMeleeRootMotionScaleParam_e_ex043 m_MinRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FMeleeRootMotionScaleParam_e_ex043 m_MaxRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingTurnRateDegrees;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingMinPitchDegrees;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingMaxPitchDegrees;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingPitchResetRate;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam1_Hit2;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam2_Hit3;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugIsDist3D;
    
    UTresAttack6_e_ex043_TripleBreak();
};


#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx351KeyBladeComboKind.h"
#include "TresAttack_e_ex351_Base.h"
#include "ETresEnemyEx351RootMotionCorrectionKind.h"
#include "TresEnemyEx351RootMotionScaleParam.h"
#include "TresAttack3_e_ex351_KeyBladeCombo.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex351_KeyBladeCombo : public UTresAttack_e_ex351_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx351KeyBladeComboKind m_ComboKind;
    
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx351RootMotionCorrectionKind m_RootMotionCorrectionKind;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TractionMaxScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KeepDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyEx351RootMotionScaleParam m_MinRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyEx351RootMotionScaleParam m_MaxRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingLimitPitch;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bMovedCorrection: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MovedCorrectionRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NotCorrectionAngle;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_GravityScale;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 m_bBackStepAcction: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_Brake;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_AnimStartTimes;
    
    UTresAttack3_e_ex351_KeyBladeCombo();
};


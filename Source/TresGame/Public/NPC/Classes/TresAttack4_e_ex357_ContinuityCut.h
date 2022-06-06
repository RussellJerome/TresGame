#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex357_Base.h"
#include "RootMotionScaleParam_e_ex358.h"
#include "ETresEnemyContinuityCutAction_e_ex357.h"
#include "TresAttack4_e_ex357_ContinuityCut.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_ex357_ContinuityCut : public UTresAttack_e_ex357_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumLoop;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex358 m_StartMinRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex358 m_StartMaxRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex358 m_MinRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex358 m_MaxRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex358 m_FinishMinRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex358 m_FinishMaxRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LandHomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirHomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirHomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirHomingLimitAnglePitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndHomingSpeed;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    TEnumAsByte<ETresEnemyContinuityCutAction_e_ex357::Type> m_ActionType;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 m_bIsStartEndMotion: 1;
    
public:
    UTresAttack4_e_ex357_ContinuityCut();
};


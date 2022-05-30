#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx353RootMotionScaleInfo.h"
#include "TresAttack_e_ex353_Base.h"
#include "TresEnemyEx353HomingParam.h"
#include "ETresEnemyEx353ComboKind.h"
#include "TresEnemyEx353RootMotionScaleParam.h"
#include "TresAttack1_e_ex353_AerialComboBase.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex353_AerialComboBase : public UTresAttack_e_ex353_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx353ComboKind m_ComboKind;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_AnimStartTimes;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx353RootMotionScaleInfo> m_RootMotionScaleInfoList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ApproachTargetSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ApproachTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx353HomingParam> m_HomingParamList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingLimitPitch;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FTresEnemyEx353RootMotionScaleParam m_MinRootMotionZScaleParam;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FTresEnemyEx353RootMotionScaleParam m_MaxRootMotionZScaleParam;
    
public:
    UTresAttack1_e_ex353_AerialComboBase();
};


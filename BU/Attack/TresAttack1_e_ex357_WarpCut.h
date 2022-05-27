#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex357_Base.h"
#include "RootMotionScaleParam_e_ex358.h"
#include "TresWarpCutMotionParam_e_ex358.h"
#include "TresAttack1_e_ex357_WarpCut.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex357_WarpCut : public UTresAttack_e_ex357_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 m_LoopAbortNumFailed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWarpCutMotionParam_e_ex358> m_MotionParamList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableAttackChanceTime: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearCorrectionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FollowSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex358 m_MinRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex358 m_MaxRootMotionScaleParam;
    
public:
    UTresAttack1_e_ex357_WarpCut();
};


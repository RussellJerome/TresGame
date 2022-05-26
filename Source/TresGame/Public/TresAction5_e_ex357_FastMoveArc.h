#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex357_Base.h"
#include "ETresEnemyMove_e_ex357.h"
#include "ETresEnemyHeight_e_ex357.h"
#include "TresAction5_e_ex357_FastMoveArc.generated.h"

UCLASS(HideDropdown)
class UTresAction5_e_ex357_FastMoveArc : public UTresAction_e_ex357_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_StartAnimRotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyMove_e_ex357::Type> m_MoveType;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyHeight_e_ex357::Type> m_HeightType;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsPriorityViewportInLocation: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsEndActionTargetLocationInvalid: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetDistanceCorrectionMaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PossibleMoveMinDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Acceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndAnimStartDistanceRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitialMoveVecOffsetPitchLand;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitialMoveVecOffsetPitchAir;
    
    UPROPERTY(EditDefaultsOnly)
    float m_YawTurnToSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchResetSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArcSizeRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArcSizeRateMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArcSizeAddRateMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArcSizeAddRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallActionAbortTimingDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_FallActionAbortTimingNumber;
    
public:
    UTresAction5_e_ex357_FastMoveArc();
};


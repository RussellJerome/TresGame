#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack12_e_ex361_ContinuousThrust.generated.h"

UCLASS(HideDropdown)
class UTresAttack12_e_ex361_ContinuousThrust : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ThrustSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ThrustAccelSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ThrustMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinRotateAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxRotateAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ThrustTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FirstThrustTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NextThrustTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ThrustNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveRateXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveRateZ;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bModifyViewPos: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsLockOnOff: 1;
    
    UTresAttack12_e_ex361_ContinuousThrust();
};


#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack6_e_ex711_ElectromagneticTornado.generated.h"

class UCurveFloat;

UCLASS(HideDropdown)
class UTresAttack6_e_ex711_ElectromagneticTornado : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_InitMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MaxMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AddMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SubMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveTurnDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ChgCollDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShakeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShakeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveHeight;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_RushCnt;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NextMoveWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NextMoveWaitShakeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NextMoveWaitTime2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NextMoveWaitShakeSpeed2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_OverRunDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_OutMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_OutMoveFinishTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CenterMoveMinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_CenterMoveCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CenterStraightMoveSpeedMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CenterStraightMoveSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_CenterStraightMoveCurve;
    
public:
    UTresAttack6_e_ex711_ElectromagneticTornado();
};


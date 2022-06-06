#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex326_ArielCombo.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_ex326_ArielCombo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_MoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_SecondMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_MoveSpeedMin;
    
    UPROPERTY(EditAnywhere)
    float m_PopDist;
    
    UPROPERTY(EditAnywhere)
    float m_MoveStopDist;
    
    UPROPERTY(EditAnywhere)
    float m_PopRot;
    
    UPROPERTY(EditAnywhere)
    float m_SecondPopDist;
    
    UPROPERTY(EditAnywhere)
    float m_SecondPopWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_ThirdPopWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_ThirdAttackEffectOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float m_ThirdAttackPosOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float m_ThirdAttackInitSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_ThirdAttackAddSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_ThirdAttackMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    bool m_AdsorptionMode;
    
    UPROPERTY(EditAnywhere)
    bool m_2AtkSkip;
    
    UPROPERTY(EditAnywhere)
    bool m_IsRevenge;
    
    UTresAttack4_e_ex326_ArielCombo();
};


#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack16_e_ex771_ThrustCombo.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack16_e_ex771_ThrustCombo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FirstMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FirstMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FirstHomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FirstHomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FirstHomingDist;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_FirstWarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SecondWarpInTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SecondXXWarpInTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SecondMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SecondMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SecondHomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SecondHomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SecondHomingDist;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UEnvQuery*> m_SecondWarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FinishWarpInTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FinishMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FinishMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FinishTgtDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FinishHomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FinishHomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FinishHomingDist;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_FinishWarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_bDisableLockon;
    
public:
    UTresAttack16_e_ex771_ThrustCombo();
};


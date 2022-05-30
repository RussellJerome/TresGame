#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack100_e_ex711_ElectromagneticTornadoTest.generated.h"

UCLASS(HideDropdown)
class UTresAttack100_e_ex711_ElectromagneticTornadoTest : public UTresAttackDefinitionBase {
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
    float m_pro_MoveTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShakeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShakeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveHeight;
    
public:
    UTresAttack100_e_ex711_ElectromagneticTornadoTest();
};


#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex761_Base.h"
#include "TresAttack_e_ex761_RushBase.generated.h"

UCLASS(HideDropdown)
class UTresAttack_e_ex761_RushBase : public UTresAttack_e_ex761_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_InitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Acceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingEndDistance;
    
public:
    UTresAttack_e_ex761_RushBase();
};


#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex048_SwordVerticalRotation.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex048_SwordVerticalRotation : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_InitialMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AccelMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomigMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimtPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndDecelMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndMinMoveSpeed;
    
public:
    UTresAttack3_e_ex048_SwordVerticalRotation();
};


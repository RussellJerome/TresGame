#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex016_AirDash.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex016_AirDash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_HomingZ: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Height;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingAngleMaxXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnAngleXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingAngleMaxZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnAngleZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Decelaration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PastTargetToEndTime;
    
public:
    UTresAttack2_e_ex016_AirDash();
};


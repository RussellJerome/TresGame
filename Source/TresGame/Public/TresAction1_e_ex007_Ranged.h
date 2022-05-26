#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionRanged.h"
#include "TresAction1_e_ex007_Ranged.generated.h"

class ATresProjectile_e_ex007_Arrow;

UCLASS(HideDropdown)
class UTresAction1_e_ex007_Ranged : public UTresAttackDefinitionRanged {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ATresProjectile_e_ex007_Arrow* m_Arrow;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Angle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartMotionTime;
    
public:
    UTresAction1_e_ex007_Ranged();
};


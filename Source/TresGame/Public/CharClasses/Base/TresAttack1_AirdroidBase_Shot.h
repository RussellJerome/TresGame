#pragma once
#include "CoreMinimal.h"
#include "TresAttack1_ToyRoboBase_Shot.h"
#include "TresAttack1_AirdroidBase_Shot.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_AirdroidBase_Shot : public UTresAttack1_ToyRoboBase_Shot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_ShakeAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OneShakeTime;
    
public:
    UTresAttack1_AirdroidBase_Shot();
};


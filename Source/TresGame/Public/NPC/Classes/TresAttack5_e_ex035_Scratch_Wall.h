#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex035_Scratch_Wall.generated.h"

class UTresAction_e_ex035_LeaveFromWall;

UCLASS(HideDropdown)
class UTresAttack5_e_ex035_Scratch_Wall : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxRoll;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresAction_e_ex035_LeaveFromWall> m_LeaveActionDefinition;
    
    UTresAttack5_e_ex035_Scratch_Wall();
};


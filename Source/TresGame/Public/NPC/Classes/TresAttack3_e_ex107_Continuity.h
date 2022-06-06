#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresFollowParams_e_ex107.h"
#include "TresAttack3_e_ex107_Continuity.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex107_Continuity : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTurnToMoveVec: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresFollowParams_e_ex107> m_FollowParams;
    
public:
    UTresAttack3_e_ex107_Continuity();
};


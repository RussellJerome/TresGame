#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresDashAnims_e_ex107.h"
#include "TresDashParams_e_ex107.h"
#include "TresAttack1_e_ex107_Dash.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex107_Dash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FTresDashAnims_e_ex107 m_GoAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    FTresDashAnims_e_ex107 m_BackAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    FTresDashParams_e_ex107 m_GoParam;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEqualParam: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FTresDashParams_e_ex107 m_BackParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WallHitAngle;
    
public:
    UTresAttack1_e_ex107_Dash();
};


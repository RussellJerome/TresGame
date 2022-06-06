#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "ETresGoalType_e_ex042_Hook.h"
#include "UObject/NoExportTypes.h"
#include "TresMove2_e_ex042_Hook.generated.h"

class UTresAttack3_e_ex042_SabelStomp;

UCLASS(HideDropdown)
class UTresMove2_e_ex042_Hook : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fShotVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPullVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinDistance;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresGoalType_e_ex042_Hook> m_GoalType;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fAnchorDestinationSearchMargin;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    int32 m_fAnchorDestinationSearchDivision;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vEndMotionRootOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSkipEndMotion;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresAttack3_e_ex042_SabelStomp> m_SabelStompDefinition;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStompBeginHeight;
    
    UTresMove2_e_ex042_Hook();
};


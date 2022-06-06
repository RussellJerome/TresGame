#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "e_ex731_DoubleClawType.h"
#include "TresAttack1_e_ex731_DoubleClaw.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex731_DoubleClaw : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<e_ex731_DoubleClawType> m_ActionType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDesiredTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxTractionSize;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDesiredTargetDistance_Dash;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxTractionSize_Dash;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxPitch_Dash;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinPitch_Dash;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebug;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fAttackLocDistanceThreshold;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bDoubleClaw;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bDashClaw;
    
    UTresAttack1_e_ex731_DoubleClaw();
};


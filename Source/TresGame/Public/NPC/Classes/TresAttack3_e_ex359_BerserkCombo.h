#pragma once
#include "CoreMinimal.h"
#include "EEX359_SplineMoveVelocityType.h"
#include "TresAttackDefinitionBase.h"
#include "EEX359_BerserkComboType.h"
#include "UObject/NoExportTypes.h"
#include "EX359_DashTractionInfo.h"
#include "TresAttack3_e_ex359_BerserkCombo.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack3_e_ex359_BerserkCombo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    TEnumAsByte<EEX359_BerserkComboType> m_ComboType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX359_SplineMoveVelocityType> m_VelocityType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocityExp;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FVector m_vStartTangent;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FVector m_vEndTangent;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_Move;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveEndAnimTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX359_DashTractionInfo> m_DashTractionInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_Warp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWarpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWarpAppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fComboGoalToTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fComboMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fUpperGoalToTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fUpperMaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishJumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishGoalToTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishMaxWarpDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishWaitTime;
    
    UTresAttack3_e_ex359_BerserkCombo();
};


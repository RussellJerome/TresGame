#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EX359_CutDownTractionInfo.h"
#include "WaveOneCollInfo_e_ex359.h"
#include "TresAttack9_e_ex359_FinalBrake_CutDown.generated.h"

class UCurveFloat;

UCLASS(HideDropdown)
class UTresAttack9_e_ex359_FinalBrake_CutDown : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEX359_CutDownTractionInfo m_TractionInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveOneCollInfo_e_ex359 m_OneCollInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AnimName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAnimStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_AnimMoveCurve;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bWhiteOut;
    
    UTresAttack9_e_ex359_FinalBrake_CutDown();
};


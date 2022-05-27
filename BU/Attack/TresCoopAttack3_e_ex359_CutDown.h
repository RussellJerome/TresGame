#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EX359_CutDownTractionInfo.h"
#include "WaveOneCollInfo_e_ex359.h"
#include "TresCoopAttack3_e_ex359_CutDown.generated.h"

class UCurveFloat;

UCLASS(HideDropdown)
class UTresCoopAttack3_e_ex359_CutDown : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX359_CutDownTractionInfo> m_TractionInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveOneCollInfo_e_ex359 m_OneCollInfo;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_StartAnimMoveCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_LoopAnimMoveCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_EndAnimMoveCurve;
    
    UTresCoopAttack3_e_ex359_CutDown();
};


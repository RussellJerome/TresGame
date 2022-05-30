#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "WaveOneCollInfo_e_ex310.h"
#include "TresCoopAttack3_e_ex306_CutDown.generated.h"

UCLASS(HideDropdown)
class UTresCoopAttack3_e_ex306_CutDown : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FWaveOneCollInfo_e_ex310 m_OneCollInfo;
    
    UTresCoopAttack3_e_ex306_CutDown();
};

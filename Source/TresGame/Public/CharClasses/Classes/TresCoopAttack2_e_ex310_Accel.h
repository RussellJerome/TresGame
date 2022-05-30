#pragma once
#include "CoreMinimal.h"
#include "WaveSet_e_ex310.h"
#include "TresAttackDefinitionBase.h"
#include "TresAccelAttackInfo_e_ex310.h"
#include "TresCoopAttack2_e_ex310_Accel.generated.h"

UCLASS(HideDropdown)
class UTresCoopAttack2_e_ex310_Accel : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FWaveSet_e_ex310 m_WaveSet;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinTurnToTargetOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxTurnToTargetOffset;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    TArray<FTresAccelAttackInfo_e_ex310> m_AttackInfoArray;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    int32 m_iOffsetDeterminParam;
    
    UTresCoopAttack2_e_ex310_Accel();
};


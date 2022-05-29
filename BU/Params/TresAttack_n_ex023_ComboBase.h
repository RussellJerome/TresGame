#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresNpc_n_ex023_TractionData.h"
#include "TresAttack_n_ex023_ComboBase.generated.h"

UCLASS(Abstract, HideDropdown)
class UTresAttack_n_ex023_ComboBase : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fAutoTractionOffsetScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, FTresNpc_n_ex023_TractionData> m_TractionDataMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bDebugComboKeep: 1;
    
public:
    UTresAttack_n_ex023_ComboBase();
};


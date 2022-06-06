#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "AITestTractionParam.h"
#include "AITestAttack_Base.generated.h"

UCLASS(HideDropdown)
class UAITestAttack_Base : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bFlyingMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FAITestTractionParam m_AnimNotifyTractionParam;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bWeaponVisible: 1;
    
public:
    UAITestAttack_Base();
};


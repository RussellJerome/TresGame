#pragma once
#include "CoreMinimal.h"
#include "AITestAttack_Base.h"
#include "AITestAttack_Melee.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UAITestAttack_Melee : public UAITestAttack_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bHitTractionXYStop: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bHitTractionZUpStop: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bHitTractionZDownStop: 1;
    
public:
    UAITestAttack_Melee();
};


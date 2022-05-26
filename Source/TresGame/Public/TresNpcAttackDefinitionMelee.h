#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresNpcAttackDefinitionMelee.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresNpcAttackDefinitionMelee : public UTresNpcAttackDefinitionBase {
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
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_EffectGroup;
    
public:
    UTresNpcAttackDefinitionMelee();
};


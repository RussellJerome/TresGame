#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresNpcAttackDefinitionCombo.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresNpcAttackDefinitionCombo : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_Attack1AnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_Attack2AnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_Attack3AnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bEnableRootMove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bEnableRootMoveAndTraction;
    
public:
    UTresNpcAttackDefinitionCombo();
};


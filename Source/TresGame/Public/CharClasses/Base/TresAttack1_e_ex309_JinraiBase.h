#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex309_JinraiBase.generated.h"

class UAnimSequenceBase;

UCLASS(Abstract)
class UTresAttack1_e_ex309_JinraiBase : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
public:
    UTresAttack1_e_ex309_JinraiBase();
};


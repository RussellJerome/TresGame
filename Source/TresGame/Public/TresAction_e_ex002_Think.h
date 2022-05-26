#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_e_ex002_Think.generated.h"

class UAnimSequenceBase;

UCLASS()
class UTresAction_e_ex002_Think : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_Anim;
    
    UTresAction_e_ex002_Think();
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/Note.h"
#include "ETresAIAction.h"
#include "TresAINote.generated.h"

class UTresActionDefinitionBase;

UCLASS()
class ATresAINote : public ANote {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresAIAction::Type> m_ActionType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresActionDefinitionBase> m_Action;
    
private:
    UPROPERTY(AdvancedDisplay, VisibleDefaultsOnly)
    bool m_bAction;
    
public:
    ATresAINote();
};


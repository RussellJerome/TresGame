#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresLevelEntitySequenceConditionalAction.h"
#include "TresLevelEntitySequence.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequence : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTresLevelEntitySequenceConditionalAction> m_ConditionalActions;
    
    UTresLevelEntitySequence();
};


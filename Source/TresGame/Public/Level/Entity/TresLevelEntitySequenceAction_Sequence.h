#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceAction.h"
#include "TresLevelEntitySequenceAction_Sequence.generated.h"

class UTresLevelEntitySequence;

UCLASS(BlueprintType, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction_Sequence : public UTresLevelEntitySequenceAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UTresLevelEntitySequence* m_Sequence;
    
    UTresLevelEntitySequenceAction_Sequence();
};


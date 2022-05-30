#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceAction.h"
#include "TresLevelEntityRestartTarget.h"
#include "TresLevelEntitySequenceAction_RestartSequence.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction_RestartSequence : public UTresLevelEntitySequenceAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTresLevelEntityRestartTarget> m_RestartTargets;
    
    UTresLevelEntitySequenceAction_RestartSequence();
};


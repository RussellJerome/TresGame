#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceAction.h"
#include "TresLevelEntitySequenceAction_Goto.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction_Goto : public UTresLevelEntitySequenceAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_Index;
    
    UTresLevelEntitySequenceAction_Goto();
};


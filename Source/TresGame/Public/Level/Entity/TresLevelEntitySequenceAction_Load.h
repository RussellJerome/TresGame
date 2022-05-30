#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceAction.h"
#include "TresLevelEntitySequenceAction_Load.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction_Load : public UTresLevelEntitySequenceAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_AsyncLoad;
    
    UPROPERTY(EditAnywhere)
    bool m_LoadAndSpawn;
    
    UTresLevelEntitySequenceAction_Load();
};


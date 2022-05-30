#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceAction.h"
#include "TresLevelEntitySequenceAction_Spawn.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction_Spawn : public UTresLevelEntitySequenceAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_DelaySpawning;
    
    UPROPERTY(EditAnywhere)
    int32 m_AppearInfoNo;
    
    UPROPERTY(EditAnywhere)
    bool m_AppearInfoNoIncrement;
    
    UPROPERTY(EditAnywhere)
    int32 m_UserDataNo;
    
    UPROPERTY(EditAnywhere)
    bool m_UserDataNoIncrement;
    
    UPROPERTY(EditAnywhere)
    bool m_ResetAndSpawn;
    
    UPROPERTY(EditAnywhere)
    bool m_SkipDrawAttractionFlowMarker;
    
    UTresLevelEntitySequenceAction_Spawn();
};


#pragma once
#include "CoreMinimal.h"
#include "ETresLevelEntityRestartSequence.h"
#include "TresLevelEntityRestartTarget.generated.h"

class ATresLevelEntityControlVolume;

USTRUCT(BlueprintType)
struct FTresLevelEntityRestartTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ATresLevelEntityControlVolume* m_SequenceOwner;
    
    UPROPERTY(EditAnywhere)
    ETresLevelEntityRestartSequence m_Sequence;
    
    TRESGAME_API FTresLevelEntityRestartTarget();
};


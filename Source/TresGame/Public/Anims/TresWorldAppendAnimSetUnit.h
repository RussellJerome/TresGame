#pragma once
#include "CoreMinimal.h"
#include "TresWorldAppendAnimSetUnit.generated.h"

class UTresAnimSet;

USTRUCT(BlueprintType)
struct FTresWorldAppendAnimSetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresAnimSet*> m_AnimSets;
    
    TRESGAME_API FTresWorldAppendAnimSetUnit();
};


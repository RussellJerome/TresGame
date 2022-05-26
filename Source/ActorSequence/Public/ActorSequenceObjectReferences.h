#pragma once
#include "CoreMinimal.h"
#include "ActorSequenceObjectReference.h"
#include "ActorSequenceObjectReferences.generated.h"

USTRUCT(BlueprintType)
struct FActorSequenceObjectReferences {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FActorSequenceObjectReference> Array;
    
    ACTORSEQUENCE_API FActorSequenceObjectReferences();
};


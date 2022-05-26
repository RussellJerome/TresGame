#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorSequenceObjectReferences.h"
#include "ActorSequenceObjectReferenceMap.generated.h"

USTRUCT(BlueprintType)
struct FActorSequenceObjectReferenceMap {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGuid> BindingIds;
    
    UPROPERTY()
    TArray<FActorSequenceObjectReferences> References;
    
public:
    ACTORSEQUENCE_API FActorSequenceObjectReferenceMap();
};


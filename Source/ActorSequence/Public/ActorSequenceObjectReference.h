#pragma once
#include "CoreMinimal.h"
#include "EActorSequenceObjectReferenceType.h"
#include "UObject/NoExportTypes.h"
#include "ActorSequenceObjectReference.generated.h"

USTRUCT(BlueprintType)
struct FActorSequenceObjectReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    EActorSequenceObjectReferenceType Type;
    
    UPROPERTY()
    FGuid ActorId;
    
    UPROPERTY()
    FString PathToComponent;
    
public:
    ACTORSEQUENCE_API FActorSequenceObjectReference();
};


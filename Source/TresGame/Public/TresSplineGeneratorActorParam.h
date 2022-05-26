#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresSplineGeneratorActorParam.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresSplineGeneratorActorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Span;
    
    TRESGAME_API FTresSplineGeneratorActorParam();
};


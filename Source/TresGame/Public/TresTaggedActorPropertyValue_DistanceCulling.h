#pragma once
#include "CoreMinimal.h"
#include "TresTaggedActorPropertyValueBase.h"
#include "TresTaggedActorPropertyValue_DistanceCulling.generated.h"

USTRUCT()
struct FTresTaggedActorPropertyValue_DistanceCulling : public FTresTaggedActorPropertyValueBase {
    GENERATED_BODY()
public:
    TRESGAME_API FTresTaggedActorPropertyValue_DistanceCulling();
};


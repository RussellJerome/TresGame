#pragma once
#include "CoreMinimal.h"
#include "TresVectorAnim.h"
#include "TresScaleVectorAnim.generated.h"

USTRUCT(BlueprintType)
struct FTresScaleVectorAnim : public FTresVectorAnim {
    GENERATED_BODY()
public:
    TRESGAME_API FTresScaleVectorAnim();
};


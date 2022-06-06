#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ex064Parameter.generated.h"

USTRUCT(BlueprintType)
struct Fex064Parameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_AnimDamageWaitTime;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_WallPartsSpawnTimeRange;
    
    TRESGAME_API Fex064Parameter();
};


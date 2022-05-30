#pragma once
#include "CoreMinimal.h"
#include "ArtilleryOptimizeParam.generated.h"

USTRUCT()
struct FArtilleryOptimizeParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_OffsetIndex;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackName;
    
    TRESGAME_API FArtilleryOptimizeParam();
};


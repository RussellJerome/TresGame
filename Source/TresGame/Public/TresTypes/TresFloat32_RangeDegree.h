#pragma once
#include "CoreMinimal.h"
#include "TresFloat32_RangeDegree.generated.h"

USTRUCT(BlueprintType)
struct FTresFloat32_RangeDegree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMinAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMaxAngle;
    
    TRESGAME_API FTresFloat32_RangeDegree();
};


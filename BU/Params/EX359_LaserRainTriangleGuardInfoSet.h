#pragma once
#include "CoreMinimal.h"
#include "EX359_LaserRainTriangleGuardInfo.h"
#include "EX359_LaserRainTriangleGuardInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FEX359_LaserRainTriangleGuardInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FEX359_LaserRainTriangleGuardInfo> m_InfoArray;
    
    TRESGAME_API FEX359_LaserRainTriangleGuardInfoSet();
};


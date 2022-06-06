#pragma once
#include "CoreMinimal.h"
#include "EX359_LaserRainTriangleGuardInfo.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FEX359_LaserRainTriangleGuardInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectileBase* m_Proj;
    
    TRESGAME_API FEX359_LaserRainTriangleGuardInfo();
};


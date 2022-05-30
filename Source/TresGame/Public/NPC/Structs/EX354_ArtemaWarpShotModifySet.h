#pragma once
#include "CoreMinimal.h"
#include "EX354_ArtemaWarpShotModifySet.generated.h"

class AActor;

USTRUCT()
struct FEX354_ArtemaWarpShotModifySet {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_Target;
    
    TRESGAME_API FEX354_ArtemaWarpShotModifySet();
};


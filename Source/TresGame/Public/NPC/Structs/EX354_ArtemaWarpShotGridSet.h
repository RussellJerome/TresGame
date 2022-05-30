#pragma once
#include "CoreMinimal.h"
#include "EX354_ArtemaWarpShotGrid.h"
#include "EX354_ArtemaWarpShotGridSet.generated.h"

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotGridSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iGridNumX;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iGridNumY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AvoidOverrapScale;
    
protected:
    UPROPERTY()
    TArray<FEX354_ArtemaWarpShotGrid> m_GridArray;
    
public:
    TRESGAME_API FEX354_ArtemaWarpShotGridSet();
};


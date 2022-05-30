#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointFilter.h"
#include "ETresSpawnPointRadiusFilterType.h"
#include "ETresSpawnPointHeightFilterType.h"
#include "TresSpawnPointSizeFilter.generated.h"

UCLASS(NonTransient)
class TRESGAME_API UTresSpawnPointSizeFilter : public UTresSpawnPointFilter {
    GENERATED_BODY()
public:
    UPROPERTY()
    float m_Radius;
    
    UPROPERTY()
    float m_Height;
    
    UPROPERTY()
    TEnumAsByte<ETresSpawnPointRadiusFilterType> m_RadiusFilterType;
    
    UPROPERTY()
    TEnumAsByte<ETresSpawnPointHeightFilterType> m_HeightFilterType;
    
    UTresSpawnPointSizeFilter();
};


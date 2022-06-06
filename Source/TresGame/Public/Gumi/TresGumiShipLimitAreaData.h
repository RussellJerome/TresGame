#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipLimitType.h"
#include "TresGumiShipLimitAreaData.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipLimitAreaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresGumiShipLimitType m_eType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fValue;
    
    TRESGAME_API FTresGumiShipLimitAreaData();
};


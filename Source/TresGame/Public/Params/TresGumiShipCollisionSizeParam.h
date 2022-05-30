#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipCollisionSizeParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipCollisionSizeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector m_vSize;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector m_vMaxOfIncreaseSize;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fIncreaseTime;
    
    TRESGAME_API FTresGumiShipCollisionSizeParam();
};


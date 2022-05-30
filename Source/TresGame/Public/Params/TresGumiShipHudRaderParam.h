#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipHudRaderParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipHudRaderParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fRaderRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMiddleAlertRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fNearAlertRange;
    
    TRESGAME_API FTresGumiShipHudRaderParam();
};


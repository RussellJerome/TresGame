#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamOnRateInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_BeamOnRateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fTimingRate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iNotify;
    
    TRESGAME_API FEX359_BeamOnRateInfo();
};


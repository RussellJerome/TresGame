#pragma once
#include "CoreMinimal.h"
#include "TresTimeGaugeParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresTimeGaugeParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float InitialValue;
    
    UPROPERTY(EditDefaultsOnly)
    float SubValueIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float SubValue;
    
    TRESGAME_API FTresTimeGaugeParam_e_ex356();
};


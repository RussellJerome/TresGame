#pragma once
#include "CoreMinimal.h"
#include "TresCockpitTargetInfo.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresCockpitTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* TargetCursor;
    
    UPROPERTY(Transient)
    UGFxObject* Gauge;
    
    UPROPERTY(Transient)
    UGFxObject* GaugeParts[3];
    
    TRESGAME_API FTresCockpitTargetInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "TresUIP_HudTarget_UltimaLock.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresUIP_HudTarget_UltimaLock {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* Root;
    
    UPROPERTY(Transient)
    UGFxObject* UltimaLockSet;
    
    UPROPERTY(Transient)
    UGFxObject* UltimaLockGauge;
    
    TRESGAME_API FTresUIP_HudTarget_UltimaLock();
};


#pragma once
#include "CoreMinimal.h"
#include "TresUIP_HudTarget_ButtonCount.generated.h"

class UGFxObject;
class UTresASProxyTresControlsBitmapNumber;

USTRUCT(BlueprintType)
struct FTresUIP_HudTarget_ButtonCount {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* Root;
    
    UPROPERTY(Transient)
    UGFxObject* ColorSet;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* Seconds;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* DecimalSeconds;
    
    TRESGAME_API FTresUIP_HudTarget_ButtonCount();
};


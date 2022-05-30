#pragma once
#include "CoreMinimal.h"
#include "HudRalph_RalphBtn.generated.h"

class UGFxObject;
class UTresASProxyTresControlsBitmapNumber;

USTRUCT(BlueprintType)
struct FHudRalph_RalphBtn {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* Root;
    
    UPROPERTY(Transient)
    UGFxObject* Icon;
    
    UPROPERTY(Transient)
    UGFxObject* IconS;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* StockBitmapNumber;
    
    TRESGAME_API FHudRalph_RalphBtn();
};


#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MultiItemGet_ItemText.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresUIP_MultiItemGet_ItemText {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* Name;
    
    UPROPERTY(Transient)
    UGFxObject* Num;
    
    UPROPERTY(Transient)
    UGFxObject* Max;
    
    TRESGAME_API FTresUIP_MultiItemGet_ItemText();
};


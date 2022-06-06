#pragma once
#include "CoreMinimal.h"
#include "ETresWorldCode.h"
#include "TresUIWorldIconName.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTresUIWorldIconName {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(EditDefaultsOnly)
    FString WorldNameKey;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* IconAsset;
    
    TRESGAME_API FTresUIWorldIconName();
};


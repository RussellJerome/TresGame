#pragma once
#include "CoreMinimal.h"
#include "GameHelpItemPage.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FGameHelpItemPage {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTexture* Image;
    
    UPROPERTY(EditDefaultsOnly)
    FString TextNamespaceKey;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FString> TextNamespaceKeyPlatform;
    
    TRESGAME_API FGameHelpItemPage();
};


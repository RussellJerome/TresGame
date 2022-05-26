#pragma once
#include "CoreMinimal.h"
#include "ExternalTexture.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FExternalTexture {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Resource;
    
    UPROPERTY()
    UTexture* Texture;
    
    SCALEFORMUI_API FExternalTexture();
};


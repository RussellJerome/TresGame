#pragma once
#include "CoreMinimal.h"
#include "SlideShowIconData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FSlideShowIconData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTexture* Texture;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Code;
    
    TRESGAME_API FSlideShowIconData();
};


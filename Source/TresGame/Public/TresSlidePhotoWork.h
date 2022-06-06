#pragma once
#include "CoreMinimal.h"
#include "TresSlidePhotoWork.generated.h"

class UTexture;

USTRUCT()
struct FTresSlidePhotoWork {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTexture* pTexture;
    
    TRESGAME_API FTresSlidePhotoWork();
};


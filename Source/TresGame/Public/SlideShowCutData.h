#pragma once
#include "CoreMinimal.h"
#include "SlideShowCutData.generated.h"

USTRUCT(BlueprintType)
struct FSlideShowCutData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString m_CutId;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SlideId;
    
    TRESGAME_API FSlideShowCutData();
};


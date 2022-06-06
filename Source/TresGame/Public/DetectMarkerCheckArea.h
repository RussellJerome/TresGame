#pragma once
#include "CoreMinimal.h"
#include "DetectMarkerCheckArea.generated.h"

USTRUCT(BlueprintType)
struct FDetectMarkerCheckArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Buttom;
    
    TRESGAME_API FDetectMarkerCheckArea();
};


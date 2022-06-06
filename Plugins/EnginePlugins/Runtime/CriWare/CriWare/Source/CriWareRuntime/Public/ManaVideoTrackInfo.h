#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EManaMovieType.h"
#include "ManaVideoTrackInfo.generated.h"

USTRUCT(BlueprintType)
struct FManaVideoTrackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIntPoint TextureDimension;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIntPoint DisplayDimension;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FrameRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 TotalFrames;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsAlphaMovie;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EManaMovieType Type;
    
    CRIWARERUNTIME_API FManaVideoTrackInfo();
};


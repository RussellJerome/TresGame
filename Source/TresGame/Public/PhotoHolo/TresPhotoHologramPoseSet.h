#pragma once
#include "CoreMinimal.h"
#include "TresPhotoHologramPoseSet.generated.h"

USTRUCT()
struct FTresPhotoHologramPoseSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AnimName;
    
    UPROPERTY(EditAnywhere)
    float StartTime;
    
    UPROPERTY(EditAnywhere)
    bool IsWeaponVisible;
    
    TRESGAME_API FTresPhotoHologramPoseSet();
};


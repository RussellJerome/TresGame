#pragma once
#include "CoreMinimal.h"
#include "TresWinnieAnimationData.h"
#include "WinniePlayerAnimationType.h"
#include "TresWinniePlayerAnimationData.generated.h"

USTRUCT()
struct FTresWinniePlayerAnimationData : public FTresWinnieAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    WinniePlayerAnimationType AnimationType;
    
    TRESGAME_API FTresWinniePlayerAnimationData();
};


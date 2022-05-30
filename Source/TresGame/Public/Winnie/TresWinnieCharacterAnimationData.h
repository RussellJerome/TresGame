#pragma once
#include "CoreMinimal.h"
#include "TresWinnieAnimationData.h"
#include "WinnieCharacterAnimationType.h"
#include "TresWinnieCharacterAnimationData.generated.h"

USTRUCT()
struct FTresWinnieCharacterAnimationData : public FTresWinnieAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    WinnieCharacterAnimationType AnimationType;
    
    TRESGAME_API FTresWinnieCharacterAnimationData();
};


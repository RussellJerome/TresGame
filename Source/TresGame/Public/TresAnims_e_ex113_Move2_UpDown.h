#pragma once
#include "CoreMinimal.h"
#include "TresAnims_e_ex113_Move2_UpDown.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FTresAnims_e_ex113_Move2_UpDown {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* EndAnimData;
    
    TRESGAME_API FTresAnims_e_ex113_Move2_UpDown();
};


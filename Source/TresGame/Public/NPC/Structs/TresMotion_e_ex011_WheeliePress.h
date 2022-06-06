#pragma once
#include "CoreMinimal.h"
#include "TresMotion_e_ex011_WheeliePress.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FTresMotion_e_ex011_WheeliePress {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* EndAnimData;
    
    TRESGAME_API FTresMotion_e_ex011_WheeliePress();
};


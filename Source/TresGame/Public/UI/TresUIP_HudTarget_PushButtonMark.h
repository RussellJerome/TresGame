#pragma once
#include "CoreMinimal.h"
#include "TresUIP_HudTarget_PushButtonMark.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresUIP_HudTarget_PushButtonMark {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* Root;
    
    TRESGAME_API FTresUIP_HudTarget_PushButtonMark();
};


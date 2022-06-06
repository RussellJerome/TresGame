#pragma once
#include "CoreMinimal.h"
#include "ETresSkeletalFootStampDir.generated.h"

UENUM(BlueprintType)
enum class ETresSkeletalFootStampDir : uint8 {
    Normal,
    LR_Reverse,
    FB_Reverse,
    LRFB_Reverse,
};


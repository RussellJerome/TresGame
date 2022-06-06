#pragma once
#include "CoreMinimal.h"
#include "FlashTextureRescale.generated.h"

UENUM(BlueprintType)
enum FlashTextureRescale {
    FlashTextureScale_High,
    FlashTextureScale_Low,
    FlashTextureScale_NextLow,
    FlashTextureScale_Mult4,
    FlashTextureScale_None,
    FlashTextureScale_MAX UMETA(Hidden),
};


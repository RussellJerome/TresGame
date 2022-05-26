#pragma once
#include "CoreMinimal.h"
#include "ETresStickerType.generated.h"

UENUM(BlueprintType)
enum class ETresStickerType : uint8 {
    STICKER_TYPE_NULL,
    STICKER_TYPE_NUMBER,
    STICKER_TYPE_SYMBOL,
    STICKER_TYPE_DESIGN,
    STICKER_TYPE_CHARACTER,
    STICKER_TYPE_MAX UMETA(Hidden),
};


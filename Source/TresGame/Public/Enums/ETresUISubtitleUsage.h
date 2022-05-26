#pragma once
#include "CoreMinimal.h"
#include "ETresUISubtitleUsage.generated.h"

UENUM(BlueprintType)
enum class ETresUISubtitleUsage : uint8 {
    Cutscene,
    FieldVoice,
    Talk,
};


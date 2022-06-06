#pragma once
#include "CoreMinimal.h"
#include "ETresAIAttrResistKind.generated.h"

UENUM(BlueprintType)
enum class ETresAIAttrResistKind : uint8 {
    Normal,
    Low,
    High,
    Invalid,
};


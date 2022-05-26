#pragma once
#include "CoreMinimal.h"
#include "ETresUIValueCompareType.generated.h"

UENUM(BlueprintType)
enum class ETresUIValueCompareType : uint8 {
    GreaterEq,
    Grater,
    LessEq,
    Less,
    Equal,
    NotEqual,
    None,
};


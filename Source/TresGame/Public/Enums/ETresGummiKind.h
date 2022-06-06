#pragma once
#include "CoreMinimal.h"
#include "ETresGummiKind.generated.h"

UENUM(BlueprintType)
enum class ETresGummiKind : uint8 {
    GUMMI_KIND_NULL,
    GUMMI_KIND_BASE,
    GUMMI_KIND_DECO,
    GUMMI_KIND_TYPE_MAX UMETA(Hidden),
    GUMMI_KIND_MAX UMETA(Hidden),
};


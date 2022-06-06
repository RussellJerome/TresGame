#pragma once
#include "CoreMinimal.h"
#include "ETresValueModifierMethod.generated.h"

UENUM(BlueprintType)
namespace ETresValueModifierMethod {
    enum Type {
        Set,
        Add,
        Sub,
        Mul,
        Div,
    };
}


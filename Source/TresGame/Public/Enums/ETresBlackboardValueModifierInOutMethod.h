#pragma once
#include "CoreMinimal.h"
#include "ETresBlackboardValueModifierInOutMethod.generated.h"

UENUM(BlueprintType)
namespace ETresBlackboardValueModifierInOutMethod {
    enum Type {
        Set,
        Add,
        Sub,
        Mul,
        Div,
    };
}


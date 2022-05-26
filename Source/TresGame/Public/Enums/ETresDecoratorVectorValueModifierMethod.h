#pragma once
#include "CoreMinimal.h"
#include "ETresDecoratorVectorValueModifierMethod.generated.h"

UENUM(BlueprintType)
namespace ETresDecoratorVectorValueModifierMethod {
    enum Type {
        Set,
        Add,
        Sub,
        Mul,
        Div,
    };
}


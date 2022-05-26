#pragma once
#include "CoreMinimal.h"
#include "ETresDecoratorValueModifierMethod.generated.h"

UENUM(BlueprintType)
namespace ETresDecoratorValueModifierMethod {
    enum Type {
        Set,
        Add,
        Sub,
        Mul,
        Div,
    };
}


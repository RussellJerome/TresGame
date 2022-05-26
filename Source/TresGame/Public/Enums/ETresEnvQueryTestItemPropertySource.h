#pragma once
#include "CoreMinimal.h"
#include "ETresEnvQueryTestItemPropertySource.generated.h"

UENUM(BlueprintType)
namespace ETresEnvQueryTestItemPropertySource {
    enum Type {
        BlackboardKey,
        Property,
        Function,
    };
}


#pragma once
#include "CoreMinimal.h"
#include "EEnvGeneratorOnRingRadiusMode.generated.h"

UENUM(BlueprintType)
namespace EEnvGeneratorOnRingRadiusMode {
    enum Type {
        ContextCenter,
        ContextRadius,
        QuerierAndContextRadius,
    };
}


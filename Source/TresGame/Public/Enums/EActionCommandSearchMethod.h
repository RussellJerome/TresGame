#pragma once
#include "CoreMinimal.h"
#include "EActionCommandSearchMethod.generated.h"

UENUM(BlueprintType)
enum class EActionCommandSearchMethod : uint8 {
    Latest,
    Oldest,
};


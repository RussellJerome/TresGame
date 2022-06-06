#pragma once
#include "CoreMinimal.h"
#include "ETresGameKey.generated.h"

UENUM(BlueprintType)
namespace ETresGameKey {
    enum Type {
        Decide,
        Cancel,
        SituationCommand,
        AfCancel,
    };
}


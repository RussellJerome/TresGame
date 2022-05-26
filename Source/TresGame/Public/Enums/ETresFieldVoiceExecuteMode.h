#pragma once
#include "CoreMinimal.h"
#include "ETresFieldVoiceExecuteMode.generated.h"

UENUM(BlueprintType)
namespace ETresFieldVoiceExecuteMode {
    enum Type {
        Tick,
        Begin,
        End,
        Auto,
    };
}


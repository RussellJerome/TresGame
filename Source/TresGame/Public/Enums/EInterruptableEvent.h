#pragma once
#include "CoreMinimal.h"
#include "EInterruptableEvent.generated.h"

UENUM(BlueprintType)
namespace EInterruptableEvent {
    enum Type {
        IE_OnDamage,
        IE_OnReflect,
        IE_OnRevenge,
        IE_OnDeath,
        IE_OnScriptBegin,
        IE_OnScriptEnd,
        IE_MAX UMETA(Hidden),
    };
}


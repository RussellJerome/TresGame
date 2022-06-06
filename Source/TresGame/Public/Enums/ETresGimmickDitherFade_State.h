#pragma once
#include "CoreMinimal.h"
#include "ETresGimmickDitherFade_State.generated.h"

UENUM(BlueprintType)
enum class ETresGimmickDitherFade_State : uint8 {
    FadeIn,
    FadeOut,
    ETresGimmickDitherFade_MAX UMETA(Hidden),
};


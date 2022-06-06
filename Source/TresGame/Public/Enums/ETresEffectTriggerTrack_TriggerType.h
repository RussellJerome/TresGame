#pragma once
#include "CoreMinimal.h"
#include "ETresEffectTriggerTrack_TriggerType.generated.h"

UENUM(BlueprintType)
enum ETresEffectTriggerTrack_TriggerType {
    ETresEffectTriggerTrack_TriggerType_OnActive,
    ETresEffectTriggerTrack_TriggerType_OnDective,
    ETresEffectTriggerTrack_TriggerType_OnLoopEnd,
    ETresEffectTriggerTrack_TriggerType_OnFadeOut,
    ETresEffectTriggerTrack_TriggerType_OnFadeIn,
    ETresEffectTriggerTrack_TriggerType_OnColorChange,
};


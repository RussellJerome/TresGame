#pragma once
#include "CoreMinimal.h"
#include "EEX359_CommonAction.generated.h"

UENUM(BlueprintType)
enum EEX359_CommonAction {
    EEX359_CommonAction_LockonOn,
    EEX359_CommonAction_LockonOff,
    EEX359_CommonAction_SceneChangeStart,
    EEX359_CommonAction_SceneChangeEnd,
};


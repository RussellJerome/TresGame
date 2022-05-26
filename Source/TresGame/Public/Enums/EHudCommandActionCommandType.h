#pragma once
#include "CoreMinimal.h"
#include "EHudCommandActionCommandType.generated.h"

UENUM(BlueprintType)
enum EHudCommandActionCommandType {
    ACTION_COMMAND_TYPE_HATENA,
    ACTION_COMMAND_TYPE_WEP,
    ACTION_COMMAND_TYPE_ATF,
    ACTION_COMMAND_TYPE_DMAGIC,
    ACTION_COMMAND_TYPE_FRIEND,
    ACTION_COMMAND_TYPE_LINK,
    ACTION_COMMAND_TYPE_MAX UMETA(Hidden),
    ACTION_COMMAND_TYPE_STYLE_POINT_GAUGE = 0x64,
};


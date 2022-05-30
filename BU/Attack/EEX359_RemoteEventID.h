#pragma once
#include "CoreMinimal.h"
#include "EEX359_RemoteEventID.generated.h"

UENUM(BlueprintType)
enum EEX359_RemoteEventID {
    EEX359_RemoteEventID_ChangeSceneStart,
    EEX359_RemoteEventID_ChangeSceneEnd,
    EEX359_RemoteEventID_FinalBrakeStart,
    EEX359_RemoteEventID_FinalBrakeEnd,
    EEX359_RemoteEventID_BerserkStart,
    EEX359_RemoteEventID_BerserkEnd,
    EEX359_RemoteEventID_Max,
};


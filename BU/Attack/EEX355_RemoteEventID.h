#pragma once
#include "CoreMinimal.h"
#include "EEX355_RemoteEventID.generated.h"

UENUM(BlueprintType)
enum EEX355_RemoteEventID {
    EEX355_RemoteEventID_StartBlue,
    EEX355_RemoteEventID_EndBlue,
    EEX355_RemoteEventID_Max,
};


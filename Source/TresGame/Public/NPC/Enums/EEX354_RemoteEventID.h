#pragma once
#include "CoreMinimal.h"
#include "EEX354_RemoteEventID.generated.h"

UENUM(BlueprintType)
enum EEX354_RemoteEventID {
    EEX354_RemoteEventID_StartArtema,
    EEX354_RemoteEventID_EndArtema,
    EEX354_RemoteEventID_EndArtemaShooting,
    EEX354_RemoteEventID_QuickBattleSuccess,
    EEX354_RemoteEventID_QuickBattleFailure,
    EEX354_RemoteEventID_QuickBattleMognet,
    EEX354_RemoteEventID_Max,
};


#pragma once
#include "CoreMinimal.h"
#include "EEX354_WarpPosType.generated.h"

UENUM(BlueprintType)
enum EEX354_WarpPosType {
    EEX354_WarpPosType_Land,
    EEX354_WarpPosType_Fly,
    EEX354_WarpPosType_Fly_NoRev,
    EEX354_WarpPosType_Max,
};


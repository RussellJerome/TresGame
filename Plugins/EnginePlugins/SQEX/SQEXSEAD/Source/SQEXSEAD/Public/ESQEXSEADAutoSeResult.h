#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADAutoSeResult.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADAutoSeResult {
    enum Type {
        Success,
        Failure,
        Error_InvalidArgs = 0x64,
        Error_InvalidBoneName,
        Error_NotAllSocketsValid,
        Error_FailedToCreateProc,
    };
}


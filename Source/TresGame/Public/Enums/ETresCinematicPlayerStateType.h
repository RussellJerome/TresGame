#pragma once
#include "CoreMinimal.h"
#include "ETresCinematicPlayerStateType.generated.h"

UENUM(BlueprintType)
enum class ETresCinematicPlayerStateType : uint8 {
    TCPST_NONE,
    TCPST_TPVIEW,
    TCPST_CLEAR,
    TCPST_FORCE_CLEAR,
    _TCPST_MAX UMETA(Hidden),
};


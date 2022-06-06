#pragma once
#include "CoreMinimal.h"
#include "ETresPlayerUniqueID.generated.h"

UENUM(BlueprintType)
enum class ETresPlayerUniqueID : uint8 {
    SORA_KH3,
    SORA_KH3CA,
    SORA_KH3MI,
    SORA_KH3TS,
    SORA_KH3BX,
    SORA_KH3EW,
    SORA_KH2,
    SORA_KH1,
    RIKU_KH3,
    RIKU_KH29,
    AQUA_KH3,
    SORA_KH3TUTO,
    SORA_KH3TS_GAME,
    SORA_KH3PO,
    UNKNOWN,
    SORA_KH3DL,
    KAIRI_KH3,
    ROXAS_KH3,
    MICKEY_KH3MiRx,
    SORA_KH3SoKc,
    _MAX UMETA(Hidden),
};


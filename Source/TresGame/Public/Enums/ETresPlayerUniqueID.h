#pragma once
#include "CoreMinimal.h"
#include "ETresPlayerUniqueID.generated.h"

UENUM(BlueprintType)
enum class ETresPlayerUniqueID : uint8 {
    SORA_KH3 = 0 UMETA(DisplayName = "Sora KH3"),
    SORA_KH3CA = 1 UMETA(DisplayName = "Sora KH3: Caribbean"),
    SORA_KH3MI = 2 UMETA(DisplayName = "Sora KH3: Monsters Inc"),
    SORA_KH3TS = 3 UMETA(DisplayName = "Sora KH3: Toy Story"),
    SORA_KH3BX = 4 UMETA(DisplayName = "Sora KH3: Baymax"),
    SORA_KH3EW = 5 UMETA(DisplayName = "Sora KH3: Final World"),
    SORA_KH2 = 6 UMETA(DisplayName = "Sora KH2"),
    SORA_KH1 = 7 UMETA(DisplayName = "Sora KH1"),
    RIKU_KH3 = 8 UMETA(DisplayName = "Riku KH3"),
    RIKU_KH29 = 9 UMETA(DisplayName = "Riku 2.9"),
    AQUA_KH3 = 10 UMETA(DisplayName = "Aqua KH3"),
    SORA_KH3TUTO = 11 UMETA(DisplayName = "Sora KH3: Tutorial"),
    SORA_KH3TS_GAME = 12 UMETA(DisplayName = "Sora KH3: Toy Story Game"),
    SORA_KH3PO = 13 UMETA(DisplayName = "Sora KH3: Pooh"),
    UNKNOWN = 14 UMETA(DisplayName = "Unknown"),
    SORA_KH3DL = 15 UMETA(DisplayName = "Sora KH3: Remind"),
    KAIRI_KH3 = 16 UMETA(DisplayName = "Kairi KH3"),
    ROXAS_KH3 = 17 UMETA(DisplayName = "Roxas KH3"),
    MICKEY_KH3MiRx = 18 UMETA(DisplayName = "Mickey KH3: Remind"),
    SORA_KH3SoKc = 19 UMETA(DisplayName = "Sora KH3: SoKc"),
    _MAX UMETA(Hidden),
};


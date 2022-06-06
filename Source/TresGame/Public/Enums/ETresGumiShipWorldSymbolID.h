#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipWorldSymbolID.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipWorldSymbolID : uint8 {
    E_GM01_WS_HE,
    E_GM01_WS_TT,
    E_GM01_WS_TS,
    E_GM01_WS_RA,
    E_GM02_WS_FZ,
    E_GM02_WS_MI,
    E_GM02_WS_BX,
    E_GM02_WS_CA,
    E_GM03_WS_KG,
    E_GM03_WS_BT,
    E_GM03_WS_01,
    E_GM03_WS_02,
    E_GM04_WS_CS,
    E_GM04_WS_01,
    E_GM04_WS_02,
    WORLD_SYMBOL_MAX UMETA(Hidden),
};


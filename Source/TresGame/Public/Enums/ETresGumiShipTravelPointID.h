#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipTravelPointID.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipTravelPointID : uint8 {
    E_GM01_TP_01,
    E_GM01_TP_02,
    E_GM01_TP_03,
    E_GM02_TP_01,
    E_GM02_TP_02,
    E_GM02_TP_03,
    E_GM03_TP_01,
    E_GM03_TP_02,
    E_GM03_TP_03,
    E_GM04_TP_01,
    E_GM04_TP_02,
    E_GM04_TP_03,
    TRAVEL_POINT_MAX UMETA(Hidden),
};


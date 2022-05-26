#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipTreasureSphereID.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipTreasureSphereID : uint8 {
    E_GM01_TR_01,
    E_GM01_TR_02,
    E_GM01_TR_03,
    E_GM02_TR_01,
    E_GM02_TR_02,
    E_GM02_TR_03,
    E_GM03_TR_01,
    E_GM03_TR_02,
    E_GM03_TR_03,
    E_GM04_TR_01,
    E_GM04_TR_02,
    E_GM04_TR_03,
    TREASURE_SPHERE_MAX UMETA(Hidden),
};


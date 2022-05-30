#pragma once
#include "CoreMinimal.h"
#include "CreateGummiShipState.generated.h"

UENUM(BlueprintType)
enum CreateGummiShipState {
    GummiShipPrepare,
    GummiShipLoad,
    GummiShipBulliding,
    GummiShipError,
};


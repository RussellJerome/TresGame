#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipPrizeItem.generated.h"

UCLASS()
class TRESGAME_API ATresGumiShipPrizeItem : public ATresGumiShipActorBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPrizeItemSignature, FVector, PrizeItemVector);
    
    ATresGumiShipPrizeItem();
};


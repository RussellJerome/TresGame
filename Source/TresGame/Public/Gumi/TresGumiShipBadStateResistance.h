#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBadStateResistance.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBadStateResistance {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bStun;
    
    TRESGAME_API FTresGumiShipBadStateResistance();
};


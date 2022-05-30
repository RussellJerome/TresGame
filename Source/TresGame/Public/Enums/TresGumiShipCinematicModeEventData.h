#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCinematicModeEventData.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipCinematicModeEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_eEventFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_EventName;
    
    TRESGAME_API FTresGumiShipCinematicModeEventData();
};


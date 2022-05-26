#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresLgRxReactionMarkerData.h"
#include "TresLgRxReactionData.generated.h"

USTRUCT(BlueprintType)
struct FTresLgRxReactionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_Location;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_Rotation;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresLgRxReactionMarkerData> m_MarkerData;
    
    TRESGAME_API FTresLgRxReactionData();
};


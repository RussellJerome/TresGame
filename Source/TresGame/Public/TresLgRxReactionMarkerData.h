#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresLgRxReactionMarkerData.generated.h"

USTRUCT(BlueprintType)
struct FTresLgRxReactionMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_SocketName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_Offset;
    
    TRESGAME_API FTresLgRxReactionMarkerData();
};


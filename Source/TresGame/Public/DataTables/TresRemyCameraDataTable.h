#pragma once
#include "CoreMinimal.h"
#include "RemyCameraWorkTiming.h"
#include "Engine/DataTable.h"
#include "TresRemyCameraDataTable.generated.h"

USTRUCT()
struct FTresRemyCameraDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    RemyCameraWorkTiming CameraWorkTiming;
    
    UPROPERTY(EditDefaultsOnly)
    FName CameraWorkEventName;
    
    TRESGAME_API FTresRemyCameraDataTable();
};


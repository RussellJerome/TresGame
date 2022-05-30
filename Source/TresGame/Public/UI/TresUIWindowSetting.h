#pragma once
#include "CoreMinimal.h"
#include "ETresUIWindowWaitType.h"
#include "ETresUIWindowPositionType.h"
#include "UObject/NoExportTypes.h"
#include "TresUIWindowSetting.generated.h"

USTRUCT(BlueprintType)
struct FTresUIWindowSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresUIWindowWaitType> WaitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresUIWindowPositionType> PositionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Position;
    
    TRESGAME_API FTresUIWindowSetting();
};


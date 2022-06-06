#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "ETresUINauticalChartPoint.h"
#include "TresNauticalChartData.generated.h"

USTRUCT()
struct FTresNauticalChartData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresUINauticalChartPoint NO;
    
    UPROPERTY(EditDefaultsOnly)
    FString TextId;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D Point;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D Range;
    
    UPROPERTY(EditDefaultsOnly)
    bool bGoal;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSavePoint;
    
    UPROPERTY(EditDefaultsOnly)
    bool bVisitedMarker;
    
    UPROPERTY(EditDefaultsOnly)
    FName MapName;
    
    UPROPERTY(EditDefaultsOnly)
    FName StartTag;
    
    UPROPERTY(EditDefaultsOnly)
    FName VisitedMarkerFlag;
    
    TRESGAME_API FTresNauticalChartData();
};


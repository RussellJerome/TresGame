#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresSqexSplineNearestInfo.generated.h"

class USQEX_SplineComponent;
class ASQEX_SplineActor;

USTRUCT(BlueprintType)
struct FTresSqexSplineNearestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    float Time;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector nearPos;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASQEX_SplineActor* splineActor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASQEX_SplineActor* nextSplineActor;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    USQEX_SplineComponent* SplineComponent;
    
    TRESGAME_API FTresSqexSplineNearestInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "TresSqexSplineNearestInfo.h"
#include "UObject/Object.h"
#include "TresSplineTransformArray.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_SplineMoverExecutor.h"
#include "TresSqexSplineStatics.generated.h"

class USQEX_SplineComponent;
class ASQEX_SplineActor;
class USplineComponent;

UCLASS(Abstract, BlueprintType, NotPlaceable)
class UTresSqexSplineStatics : public UObject {
    GENERATED_BODY()
public:
    UTresSqexSplineStatics();
    UFUNCTION(BlueprintCallable)
    static bool TresConvertUnrealSplineComponent(ASQEX_SplineActor* splineActor, USplineComponent* SplineComponent);
    
    UFUNCTION(BlueprintPure)
    static void GetSplineTransformArrayFromNum(TArray<FTresSplineTransformArray>& outTransformArray, ASQEX_SplineActor* splineActor, int32 Num, float StartOffset, float endProhibitedArea);
    
    UFUNCTION(BlueprintPure)
    static void GetSplineTransformArrayFromInterval(TArray<FTresSplineTransformArray>& outTransformArray, ASQEX_SplineActor* splineActor, float Interval, float StartOffset, float endProhibitedArea);
    
    UFUNCTION(BlueprintPure)
    static void GetSplineSectionTransformArrayFromNum(TArray<FTresSplineTransformArray>& outTransformArray, ASQEX_SplineActor* splineActor, ASQEX_SplineActor* splineSectionStart, ASQEX_SplineActor* splineSectionEnd, int32 Num, float StartOffset, float endProhibitedArea);
    
    UFUNCTION(BlueprintPure)
    static void GetSplineSectionTransformArrayFromInterval(TArray<FTresSplineTransformArray>& outTransformArray, ASQEX_SplineActor* splineActor, ASQEX_SplineActor* splineSectionStart, ASQEX_SplineActor* splineSectionEnd, float Interval, float StartOffset, float endProhibitedArea, int32 MaxNum);
    
    UFUNCTION(BlueprintPure)
    static bool GetSplineComponentLocationFromRate(USQEX_SplineComponent* SplineComponent, float Rate, FVector& OutLocation);
    
    UFUNCTION(BlueprintPure)
    static bool GetSplineActorLocationFromRate(ASQEX_SplineActor* splineActor, float Rate, FVector& OutLocation);
    
    UFUNCTION(BlueprintPure)
    static FVector GetNearPoint(ASQEX_SplineActor* splineActor, const FVector& WorldLocation);
    
    UFUNCTION(BlueprintPure)
    static ASQEX_SplineActor* GetNearestSplineActor(ASQEX_SplineActor* splineActor, const FVector& WorldLocation, bool bLocationXy);
    
    UFUNCTION(BlueprintPure)
    static bool GetNearestInfo(ASQEX_SplineActor* splineActor, const FVector& WorldLocation, FTresSqexSplineNearestInfo& Info);
    
    UFUNCTION(BlueprintPure)
    static ASQEX_SplineActor* GetFarthestSplineActor(ASQEX_SplineActor* splineActor, const FVector& WorldLocation, bool bLocationXy);
    
    UFUNCTION(BlueprintPure)
    static void ApplySplineMoverFromWorldLocation(const FVector& WorldLocation, FSQEX_SplineMoverExecutor& mover);
    
};


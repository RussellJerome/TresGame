#include "TresSqexSplineStatics.h"

class USQEX_SplineComponent;
class ASQEX_SplineActor;
class USplineComponent;

bool UTresSqexSplineStatics::TresConvertUnrealSplineComponent(ASQEX_SplineActor* splineActor, USplineComponent* SplineComponent) {
    return false;
}

void UTresSqexSplineStatics::GetSplineTransformArrayFromNum(TArray<FTresSplineTransformArray>& outTransformArray, ASQEX_SplineActor* splineActor, int32 Num, float StartOffset, float endProhibitedArea) {
}

void UTresSqexSplineStatics::GetSplineTransformArrayFromInterval(TArray<FTresSplineTransformArray>& outTransformArray, ASQEX_SplineActor* splineActor, float Interval, float StartOffset, float endProhibitedArea) {
}

void UTresSqexSplineStatics::GetSplineSectionTransformArrayFromNum(TArray<FTresSplineTransformArray>& outTransformArray, ASQEX_SplineActor* splineActor, ASQEX_SplineActor* splineSectionStart, ASQEX_SplineActor* splineSectionEnd, int32 Num, float StartOffset, float endProhibitedArea) {
}

void UTresSqexSplineStatics::GetSplineSectionTransformArrayFromInterval(TArray<FTresSplineTransformArray>& outTransformArray, ASQEX_SplineActor* splineActor, ASQEX_SplineActor* splineSectionStart, ASQEX_SplineActor* splineSectionEnd, float Interval, float StartOffset, float endProhibitedArea, int32 MaxNum) {
}

bool UTresSqexSplineStatics::GetSplineComponentLocationFromRate(USQEX_SplineComponent* SplineComponent, float Rate, FVector& OutLocation) {
    return false;
}

bool UTresSqexSplineStatics::GetSplineActorLocationFromRate(ASQEX_SplineActor* splineActor, float Rate, FVector& OutLocation) {
    return false;
}

FVector UTresSqexSplineStatics::GetNearPoint(ASQEX_SplineActor* splineActor, const FVector& WorldLocation) {
    return FVector{};
}

ASQEX_SplineActor* UTresSqexSplineStatics::GetNearestSplineActor(ASQEX_SplineActor* splineActor, const FVector& WorldLocation, bool bLocationXy) {
    return NULL;
}

bool UTresSqexSplineStatics::GetNearestInfo(ASQEX_SplineActor* splineActor, const FVector& WorldLocation, FTresSqexSplineNearestInfo& Info) {
    return false;
}

ASQEX_SplineActor* UTresSqexSplineStatics::GetFarthestSplineActor(ASQEX_SplineActor* splineActor, const FVector& WorldLocation, bool bLocationXy) {
    return NULL;
}

void UTresSqexSplineStatics::ApplySplineMoverFromWorldLocation(const FVector& WorldLocation, FSQEX_SplineMoverExecutor& mover) {
}

UTresSqexSplineStatics::UTresSqexSplineStatics() {
}


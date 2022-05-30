#pragma once
#include "CoreMinimal.h"
#include "TresEditorOnlyGeneratorBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresRandomPlaceTest.generated.h"

class ASQEX_SplineActor;

UCLASS(Abstract)
class ATresRandomPlaceTest : public ATresEditorOnlyGeneratorBase {
    GENERATED_BODY()
public:
    ATresRandomPlaceTest();
    UFUNCTION(BlueprintCallable)
    void UpdateSpline(float Delta, FVector& OutLocation, FRotator& outRotator);
    
    UFUNCTION(BlueprintCallable)
    void SetSplinePos(ASQEX_SplineActor* splineActor, float posRate, FVector& OutLocation, FRotator& outRotator);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* splineActor);
    
};


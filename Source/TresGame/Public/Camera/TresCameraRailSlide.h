#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraRailSlide.generated.h"

class AActor;

UCLASS(NotPlaceable)
class ATresCameraRailSlide : public ATresCameraNormal {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AActor* m_RailTargetActor;
    
public:
    ATresCameraRailSlide();
};


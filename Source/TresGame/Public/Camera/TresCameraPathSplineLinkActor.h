#pragma once
#include "CoreMinimal.h"
#include "TresCameraPathSplineActor.h"
#include "TresCameraPathSplineLinkActor.generated.h"

class ASQEX_SplineActor;

UCLASS()
class ATresCameraPathSplineLinkActor : public ATresCameraPathSplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ASQEX_SplineActor* m_LinkSplineActor;
    
    ATresCameraPathSplineLinkActor();
};


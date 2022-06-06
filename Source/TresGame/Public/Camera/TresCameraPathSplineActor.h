#pragma once
#include "CoreMinimal.h"
#include "SQEX_SplineActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_SplineActor -FallbackName=SQEX_SplineActor
#include "TresCameraPathSplineActor.generated.h"

class ATresCameraPathSplineLinkActor;

UCLASS(NotPlaceable)
class ATresCameraPathSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresCameraPathSplineLinkActor* m_LinkSplineFromActor;
    
    ATresCameraPathSplineActor();
};


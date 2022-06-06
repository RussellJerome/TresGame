#pragma once
#include "CoreMinimal.h"
#include "SQEX_SplineActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_SplineActor -FallbackName=SQEX_SplineActor
#include "TresWaterCurrentSplineActor.generated.h"

UCLASS()
class ATresWaterCurrentSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fDampingRate;
    
public:
    ATresWaterCurrentSplineActor();
};


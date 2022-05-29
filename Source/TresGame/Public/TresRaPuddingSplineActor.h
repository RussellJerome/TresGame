#pragma once
#include "CoreMinimal.h"
#include "SQEX_SplineActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_SplineActor -FallbackName=SQEX_SplineActor
#include "TresRaPuddingSplineActor.generated.h"

UCLASS()
class ATresRaPuddingSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_PointID;
    
    ATresRaPuddingSplineActor();
};


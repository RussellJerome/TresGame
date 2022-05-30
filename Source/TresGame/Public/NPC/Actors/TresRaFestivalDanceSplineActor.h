#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_SplineActor -FallbackName=SQEX_SplineActor
#include "SQEX_SplineActor.h"
#include "UObject/NoExportTypes.h"
#include "TresRaFestivalDanceSplineActor.generated.h"

UCLASS()
class ATresRaFestivalDanceSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor m_SplineColor;
    
    ATresRaFestivalDanceSplineActor();
};


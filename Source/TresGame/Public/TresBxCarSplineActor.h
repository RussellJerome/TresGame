#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_SplineActor -FallbackName=SQEX_SplineActor
#include "EGimmickBX_CarSplineBlinker.h"
#include "SQEX_SplineActor.h"
#include "TresBxCarSplineActor.generated.h"

UCLASS()
class ATresBxCarSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EGimmickBX_CarSplineBlinker> m_eBlinkerType;
    
    UPROPERTY(EditAnywhere)
    bool m_bConnection;
    
    UPROPERTY(EditAnywhere)
    bool m_bNoRotation;
    
    UPROPERTY(EditAnywhere)
    bool m_bHighSpeed;
    
    ATresBxCarSplineActor();
};


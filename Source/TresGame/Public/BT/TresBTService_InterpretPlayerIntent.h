#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_InterpretPlayerIntent.generated.h"

class UCurveFloat;

UCLASS()
class UTresBTService_InterpretPlayerIntent : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* PlayerIntentWeightCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* NotMovingTimeCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* PlayerNotMovingTimeCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ForwardPreferencePlayerNotMovingCurve;
    
    UTresBTService_InterpretPlayerIntent();
};


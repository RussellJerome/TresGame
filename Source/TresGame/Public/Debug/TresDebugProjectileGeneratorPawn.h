#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresDebugProjectileGeneratorPawn.generated.h"

class UCurveFloat;

UCLASS()
class ATresDebugProjectileGeneratorPawn : public ATresCharPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_ShootingRideAddScoreColorRateCurve;
    
public:
    ATresDebugProjectileGeneratorPawn();
};


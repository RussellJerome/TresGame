#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex354_ArrowRain.generated.h"

class UCurveVector;
class UCurveFloat;

UCLASS(Abstract)
class ATresProjectile_e_ex354_ArrowRain : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_AtkCollRotPitchOffsetCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_AtkCollPosOffsetCurve;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDisp;
    
    ATresProjectile_e_ex354_ArrowRain();
};


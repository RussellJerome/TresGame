#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_dw405_IllusionBlizzaga.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_dw405_IllusionBlizzaga : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_BeforeMoveStartSpinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AfterMoveStartSpinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpinSpeedInterpTime;
    
public:
    ATresProjectile_e_dw405_IllusionBlizzaga();
};


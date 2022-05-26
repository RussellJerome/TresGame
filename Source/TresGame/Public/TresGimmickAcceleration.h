#pragma once
#include "CoreMinimal.h"
#include "TresCharTriggerBox.h"
#include "TresGimmickAcceleration.generated.h"

class UParticleSystemComponent;
class UCurveFloat;

UCLASS(Config=Game)
class ATresGimmickAcceleration : public ATresCharTriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* m_pEnableEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pEffectCurve;
    
public:
    ATresGimmickAcceleration();
};


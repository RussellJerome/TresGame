#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "TresGumiShipTornadoGimmick.generated.h"

UCLASS(Abstract)
class ATresGumiShipTornadoGimmick : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotationSpeed;
    
public:
    ATresGumiShipTornadoGimmick();
    UFUNCTION(BlueprintCallable)
    void StopRotation(bool bStop);
    
};


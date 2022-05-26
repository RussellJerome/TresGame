#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerRailSlideActor.h"
#include "TresGumiShipPlayerRailSlideActorWithCamera.generated.h"

class UTresGumiShipDirectSpeedCompo;
class USpringArmComponent;

UCLASS()
class ATresGumiShipPlayerRailSlideActorWithCamera : public ATresGumiShipPlayerRailSlideActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USpringArmComponent* m_pSplingArm;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresGumiShipDirectSpeedCompo* m_pDirect;
    
public:
    ATresGumiShipPlayerRailSlideActorWithCamera();
};


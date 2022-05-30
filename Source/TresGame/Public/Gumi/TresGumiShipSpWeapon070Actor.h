#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSpWeapon230Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipSpWeapon070Actor.generated.h"

UCLASS(Abstract)
class ATresGumiShipSpWeapon070Actor : public ATresGumiShipSpWeapon230Actor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LagRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LagLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D LimitDeg;
    
    ATresGumiShipSpWeapon070Actor();
};


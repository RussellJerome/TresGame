#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipWeaponPrimitive.h"
#include "ETresGumiShipWeaponSequencePort.h"
#include "TresGumiShipWeaponBase.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipWeaponBase : public UTresGumiShipWeaponPrimitive {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_WeaponDataName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<ETresGumiShipWeaponSequencePort> m_ePort;
    
public:
    UTresGumiShipWeaponBase();
};


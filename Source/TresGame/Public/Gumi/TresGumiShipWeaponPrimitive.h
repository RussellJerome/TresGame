#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipWeaponPrimType.h"
#include "TresGumiShipPrimitiveComponentBase.h"
#include "TresGumiShipWeaponPrimitive.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipWeaponPrimitive : public UTresGumiShipPrimitiveComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresGumiShipWeaponPrimType m_ePrimitiveType;
    
public:
    UTresGumiShipWeaponPrimitive();
};


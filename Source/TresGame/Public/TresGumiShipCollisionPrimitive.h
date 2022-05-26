#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPrimitiveComponentBase.h"
#include "TresGumiShipCollisionPrimitive.generated.h"

class UBodySetup;

UCLASS(Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipCollisionPrimitive : public UTresGumiShipPrimitiveComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* m_pBodySetup;
    
public:
    UTresGumiShipCollisionPrimitive();
};


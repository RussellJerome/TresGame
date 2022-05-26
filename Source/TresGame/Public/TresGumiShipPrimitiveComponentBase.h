#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresGumiShipCompoNotifyInterface.h"
#include "TresGumiShipPrimitiveComponentBase.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPrimitiveComponentBase : public UPrimitiveComponent, public ITresGumiShipCompoNotifyInterface {
    GENERATED_BODY()
public:
    UTresGumiShipPrimitiveComponentBase();
    
    // Fix for true pure virtual functions not being implemented
};


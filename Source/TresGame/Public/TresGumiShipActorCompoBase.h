#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresGumiShipCompoNotifyInterface.h"
#include "TresGumiShipActorCompoBase.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipActorCompoBase : public UActorComponent, public ITresGumiShipCompoNotifyInterface {
    GENERATED_BODY()
public:
    UTresGumiShipActorCompoBase();
    
    // Fix for true pure virtual functions not being implemented
};


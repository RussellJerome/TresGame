#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerCapsule.h"
#include "TresNotifyInterface.h"
#include "TresTriggerCapsule.generated.h"

UCLASS(Abstract)
class ATresTriggerCapsule : public ATriggerCapsule, public ITresNotifyInterface {
    GENERATED_BODY()
public:
    ATresTriggerCapsule();
    
    // Fix for true pure virtual functions not being implemented
};


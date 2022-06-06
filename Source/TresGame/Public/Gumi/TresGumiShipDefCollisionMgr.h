#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCollisionMgr.h"
#include "TresGumiShipDefCollisionMgr.generated.h"

UCLASS(NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipDefCollisionMgr : public UTresGumiShipCollisionMgr {
    GENERATED_BODY()
public:
    UTresGumiShipDefCollisionMgr();
};


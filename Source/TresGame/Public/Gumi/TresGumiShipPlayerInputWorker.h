#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorCompoBase.h"
#include "TresGumiShipPlayerInputWorker.generated.h"

class UTresGumiShipPlayerInputWorkBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPlayerInputWorker : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UTresGumiShipPlayerInputWorkBase*> m_pInputWorks;
    
public:
    UTresGumiShipPlayerInputWorker();
};


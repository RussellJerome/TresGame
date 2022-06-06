#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGumiShipNotifyInterface.h"
#include "TresGumiShipActorBase.generated.h"

class UTresGumiShipSoundSetComponent;
class UTresRootComponent;

UCLASS(Abstract)
class ATresGumiShipActorBase : public AActor, public ITresGumiShipNotifyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTresRootComponent* m_pRootComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTresGumiShipSoundSetComponent* m_pSoundSet;
    
public:
    ATresGumiShipActorBase();
    
    // Fix for true pure virtual functions not being implemented
};


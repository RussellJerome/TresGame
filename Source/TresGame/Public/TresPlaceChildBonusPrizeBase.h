#pragma once
#include "CoreMinimal.h"
#include "TresPlacePrizeBase.h"
#include "TresGeneratorInterface.h"
#include "TresPlaceChildBonusPrizeBase.generated.h"

class UTres1dChainActorComponent;

UCLASS(Abstract)
class ATresPlaceChildBonusPrizeBase : public ATresPlacePrizeBase, public ITresGeneratorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleDefaultsOnly)
    UTres1dChainActorComponent* DebugTres1dChainActorComponent;
    
    ATresPlaceChildBonusPrizeBase();
    
    // Fix for true pure virtual functions not being implemented
};


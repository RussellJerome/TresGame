#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresFoodstuffPlacementActor.generated.h"

class UTresFoodstuffRootComponent;

UCLASS()
class ATresFoodstuffPlacementActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UTresFoodstuffRootComponent* MyRootComponent;
    
public:
    UPROPERTY(EditAnywhere)
    FName m_KeyName;
    
    ATresFoodstuffPlacementActor();
};


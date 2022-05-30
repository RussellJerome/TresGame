#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresLevelActorManager.generated.h"

class USceneComponent;

UCLASS(Config=Game)
class ATresLevelActorManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, Transient, VisibleAnywhere)
    USceneComponent* TresRootComponent;
    
    ATresLevelActorManager();
};


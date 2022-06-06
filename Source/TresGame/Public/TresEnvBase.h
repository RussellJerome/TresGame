#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnvBase.generated.h"

class USceneComponent;

UCLASS(Abstract, Config=Game)
class ATresEnvBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneComponent* SceneComponent;
    
    ATresEnvBase();
    UFUNCTION(BlueprintCallable)
    void RegistAllTickFunction(bool Enable, bool allComponent);
    
};


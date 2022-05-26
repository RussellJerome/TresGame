#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresLateralProjectionDecalActor.generated.h"

class USceneComponent;
class UDecalComponent;

UCLASS(Config=Game)
class ATresLateralProjectionDecalActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDecalComponent* DecalComponent;
    
    ATresLateralProjectionDecalActor();
};


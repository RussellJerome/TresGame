#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSplineMeshActor.generated.h"

class USceneComponent;
class USplineMeshComponent;

UCLASS(Config=Game)
class ATresSplineMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* SplineMeshComponent;
    
public:
    ATresSplineMeshActor();
};


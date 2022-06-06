#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresUIActorBG.generated.h"

class UStaticMeshComponent;

UCLASS()
class ATresUIActorBG : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
public:
    ATresUIActorBG();
};


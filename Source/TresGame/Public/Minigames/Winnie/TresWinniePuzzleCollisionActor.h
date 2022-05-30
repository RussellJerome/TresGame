#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresWinniePuzzleCollisionActor.generated.h"

class USphereComponent;

UCLASS()
class ATresWinniePuzzleCollisionActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    USphereComponent* SphereComponent;
    
public:
    ATresWinniePuzzleCollisionActor();
};


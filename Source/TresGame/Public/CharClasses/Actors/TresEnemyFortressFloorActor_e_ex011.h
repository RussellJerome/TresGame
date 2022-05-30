#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresActorInterface.h"
#include "TresEnemyFortressFloorActor_e_ex011.generated.h"

class UBoxComponent;

UCLASS()
class ATresEnemyFortressFloorActor_e_ex011 : public AActor, public ITresActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* FloorBoxComponent;
    
public:
    ATresEnemyFortressFloorActor_e_ex011();
    
    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "TresBxCarActor.h"
#include "TresBxCar2TyreActor.generated.h"

class UInstancedStaticMeshComponent;

UCLASS(Abstract)
class ATresBxCar2TyreActor : public ATresBxCarActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInstancedStaticMeshComponent* InstancedStaticMeshEx;
    
    ATresBxCar2TyreActor();
};


#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresTsDancingPlant.generated.h"

class UTresStaticMeshComponent;

UCLASS(Abstract)
class ATresTsDancingPlant : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresStaticMeshComponent* MyMesh;
    
    ATresTsDancingPlant();
};


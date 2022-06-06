#pragma once
#include "CoreMinimal.h"
#include "TresGimmickBxCarManagerActor.h"
#include "TresGimmickDitherFadeInterface.h"
#include "ETresGimmickBxCarTyreType.h"
#include "TresBxCarActor.generated.h"

class USQEXSEADZeroOneSeComponent;
class UTresStaticMeshComponent;
class UTresGimmickObstacleComponent;
class USoundBase;
class UInstancedStaticMeshComponent;

UCLASS(Abstract)
class ATresBxCarActor : public ATresGimmickBxCarManagerActor, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresStaticMeshComponent* CarMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresStaticMeshComponent* DriverStaticMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGimmickObstacleComponent* GimmickObstacle;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInstancedStaticMeshComponent* InstancedStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresGimmickBxCarTyreType TyreType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ColorTextureIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* BrakeSound;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USQEXSEADZeroOneSeComponent* CarTravelSeComponent;
    
    ATresBxCarActor();
    
    // Fix for true pure virtual functions not being implemented
};


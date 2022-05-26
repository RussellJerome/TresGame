#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorBase.h"
#include "TresGeneratorInterface.h"
#include "UObject/NoExportTypes.h"
#include "TresShapeLayoutObjectBase.generated.h"

class UObject;
class UTresSpawnActorManagerComponent;

UCLASS(Abstract)
class ATresShapeLayoutObjectBase : public ATresGimmickGeneratorBase, public ITresGeneratorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTresSpawnActorManagerComponent* SpawnActorManager;
    
    UPROPERTY(Transient)
    TArray<UObject*> ObjectArray;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FTransform> TransformArray;
    
    ATresShapeLayoutObjectBase();
    
    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickGeneratorBase.generated.h"

class UTresRootComponent;
class UStaticMeshComponent;

UCLASS(Abstract)
class ATresGimmickGeneratorBase : public ATresGimmickActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTresRootComponent* MyRoot;
    
public:
    ATresGimmickGeneratorBase();
    UFUNCTION(BlueprintCallable)
    void SetStaticMeshParameter(UStaticMeshComponent* MeshComponent);
    
};


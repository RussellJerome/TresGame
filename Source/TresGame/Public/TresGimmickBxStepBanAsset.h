#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickBxStepBanAsset.generated.h"

class AActor;
class UTresStaticMeshComponent;

UCLASS(Config=Game)
class ATresGimmickBxStepBanAsset : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresStaticMeshComponent* MyMesh;
    
    ATresGimmickBxStepBanAsset();
    UFUNCTION(BlueprintCallable)
    void SetStepBanAssetOwnerActor(AActor* GimmickOwner);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeStepBanAssetOwner(AActor* GimmickOwner);
    
};


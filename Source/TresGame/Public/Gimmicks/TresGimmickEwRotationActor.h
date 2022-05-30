#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickEwRotationActor.generated.h"

class USceneComponent;

UCLASS()
class ATresGimmickEwRotationActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* MyRoot;
    
public:
    ATresGimmickEwRotationActor();
    UFUNCTION(BlueprintCallable)
    void SetRotationEx(const FRotator& Rotator);
    
    UFUNCTION(BlueprintCallable)
    void DisableUpdateMoveNavOctTree();
    
};


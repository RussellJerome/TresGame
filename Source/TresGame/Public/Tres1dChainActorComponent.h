#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "Tres1dChainActorComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTres1dChainActorComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AActor* NextActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AActor* PrevActor;
    
public:
    UTres1dChainActorComponent();
    UFUNCTION(BlueprintCallable)
    void SetPrev(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetNext(AActor* Actor);
    
};


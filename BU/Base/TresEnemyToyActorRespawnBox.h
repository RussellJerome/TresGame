#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemyToyActorRespawnBox.generated.h"

class UBoxComponent;
class UPrimitiveComponent;

UCLASS()
class ATresEnemyToyActorRespawnBox : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* MyBox;
    
public:
    ATresEnemyToyActorRespawnBox();
private:
    UFUNCTION()
    void OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
};


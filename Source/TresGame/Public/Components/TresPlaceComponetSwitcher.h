#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresClippingInterface.h"
#include "TresPlaceComponetSwitcher.generated.h"

class UActorComponent;
class USceneComponent;
class UObject;

UCLASS()
class ATresPlaceComponetSwitcher : public AActor, public ITresClippingInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WorkDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRegisterSelf_;
    
public:
    ATresPlaceComponetSwitcher();
    UFUNCTION(BlueprintCallable)
    void AddManageComponent(UActorComponent* comp);
    
    UFUNCTION(BlueprintCallable)
    void AddManageActorClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    void AddManageActor(AActor* pActor);
    
    
    // Fix for true pure virtual functions not being implemented
};


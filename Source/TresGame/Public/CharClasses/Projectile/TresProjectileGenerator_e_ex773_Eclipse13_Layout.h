#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresProjectileGenerator_e_ex773_Eclipse13_Layout.generated.h"

class USceneComponent;

UCLASS(Abstract)
class ATresProjectileGenerator_e_ex773_Eclipse13_Layout : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* MyRoot;
    
    ATresProjectileGenerator_e_ex773_Eclipse13_Layout();
    UFUNCTION(BlueprintCallable)
    static void SetHiddenEclipse13Layout(bool bHiddenObject);
    
};


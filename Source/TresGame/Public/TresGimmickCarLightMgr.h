#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickCarLightMgr.generated.h"

class USceneComponent;
class USpotLightComponent;

UCLASS(Config=Game)
class ATresGimmickCarLightMgr : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient, VisibleAnywhere)
    TArray<USpotLightComponent*> SpotLightComponents;
    
    ATresGimmickCarLightMgr();
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HoudiniAssetActor.generated.h"

class UHoudiniAssetComponent;

UCLASS()
class HOUDINIENGINERUNTIME_API AHoudiniAssetActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHoudiniAssetComponent* HoudiniAssetComponent;
    
    AHoudiniAssetActor();
};


#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HoudiniInstancedActorComponent.generated.h"

class UObject;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniInstancedActorComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(SkipSerialization, VisibleAnywhere)
    UObject* InstancedAsset;
    
    UPROPERTY(SkipSerialization, VisibleInstanceOnly)
    TArray<AActor*> Instances;
    
    UHoudiniInstancedActorComponent();
};


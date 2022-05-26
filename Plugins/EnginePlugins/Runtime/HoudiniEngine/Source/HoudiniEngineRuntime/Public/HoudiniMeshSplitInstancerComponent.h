#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HoudiniMeshSplitInstancerComponent.generated.h"

class UStaticMesh;
class UStaticMeshComponent;
class UMaterialInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniMeshSplitInstancerComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, SkipSerialization, VisibleInstanceOnly)
    TArray<UStaticMeshComponent*> Instances;
    
    UPROPERTY(SkipSerialization, VisibleInstanceOnly)
    UMaterialInterface* OverrideMaterial;
    
    UPROPERTY(SkipSerialization, VisibleAnywhere)
    UStaticMesh* InstancedMesh;
    
public:
    UHoudiniMeshSplitInstancerComponent();
};


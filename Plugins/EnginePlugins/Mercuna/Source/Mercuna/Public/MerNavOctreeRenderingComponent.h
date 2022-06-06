#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "MerNavOctreeRenderingComponent.generated.h"

class UMaterialInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMerNavOctreeRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInterface* Material;
    
    UPROPERTY()
    UMaterialInterface* SelectionMaterial;
    
    UMerNavOctreeRenderingComponent();
};


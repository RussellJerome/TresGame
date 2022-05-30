#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/PrimitiveComponent.h"
#include "TresPhotoHologramMaterialParamControlComponent.generated.h"

class UTresSkeletalMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresPhotoHologramMaterialParamControlComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TWeakObjectPtr<UTresSkeletalMeshComponent> m_pTargetMesh;
    
public:
    UTresPhotoHologramMaterialParamControlComponent();
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetVectorParamByScrMatName(FName InMaterialName, const FName InParamName, const FLinearColor& InVector);
    
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetVectorParam(int32 InMaterialIndex, const FName InParamName, const FLinearColor& InVector);
    
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetScalarParamByScrMatName(FName InMaterialName, const FName InParamName, float InScalar);
    
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetScalarParam(int32 InMaterialIndex, const FName InParamName, float InScalar);
    
};


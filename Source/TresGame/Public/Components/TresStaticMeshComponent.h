#pragma once
#include "CoreMinimal.h"
#include "TresAnimNotifyState_AttachEffect.h"
#include "Components/StaticMeshComponent.h"
#include "TresRailSlideActor.h"
#include "UObject/NoExportTypes.h"
#include "TresStaticMeshComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bDisableAutoMaterialInstanceDynamics: 1;
    
protected:
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UMaterialInstanceDynamic*> m_MaterialInstanceDynamics;
    
public:
    UTresStaticMeshComponent();
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetVectorParamAll(TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, FLinearColor InVector);
    
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetVectorParam(int32 InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, FLinearColor InVector);
    
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetScalarParamAll(TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar);
    
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetScalarParam(int32 InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar);
    
};


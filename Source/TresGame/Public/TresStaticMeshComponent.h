// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TresGame.h"
#include "TresStaticMeshComponent.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class TRESGAME_API UTresStaticMeshComponent : public UStaticMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStaticMeshComponent")
	bool m_bDisableAutoMaterialInstanceDynamics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStaticMeshComponent")
	TArray<class UMaterialInstanceDynamic*> m_MaterialInstanceDynamics;

	UFUNCTION(BlueprintCallable, Category = "TresStaticMeshComponent")
	void BP_MaterialSetVectorParamAll(TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, const struct FLinearColor& InVector) {};

	UFUNCTION(BlueprintCallable, Category = "TresStaticMeshComponent")
	void BP_MaterialSetVectorParam(int InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, const struct FLinearColor& InVector) {};

	UFUNCTION(BlueprintCallable, Category = "TresStaticMeshComponent")
	void BP_MaterialSetScalarParamAll(TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar) {};

	UFUNCTION(BlueprintCallable, Category = "TresStaticMeshComponent")
	void BP_MaterialSetScalarParam(int InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar) {};
};

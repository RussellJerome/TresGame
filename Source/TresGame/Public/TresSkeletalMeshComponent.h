// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "TresGame.h"
#include "TresSkeletalMeshComponent.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresSkeletalMeshComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	bool m_bCanbeDetectAsBodyColl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	FName m_BodyCollGrpName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	bool m_BodyCollIgnoreNameNoneGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	TEnumAsByte<ETresBodyCollReactionType> m_BodyCollReactionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	bool m_bNeedSnowRenderDepthPrimitive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	FName m_SnowTailAttachName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	FVector m_SnowTailAttachRelativeOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	FVector m_SnowTailAttachScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	bool m_bEnableSyncAnimPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	bool m_bEnableBonamikWhenOwnerHidden;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	bool m_bEnableCollisionFootStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	int m_bDisableCollisionFootStepLOD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	TArray<FTresSkeletalFootStepUnit> m_CheckFootSteps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	class UPhysicalMaterial* m_pDetectPhysMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	class UPhysicalMaterial* m_pDetectWaterPhysMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	class UPhysicalMaterial* m_pDetectInnerWaterPhysMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	struct FHitResult m_WaterSurfaceInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	class UParticleSystemComponent* m_pSnowTailComp;

	//UFUNCTION(BlueprintCallable, Category = "TresSkeletalMeshComponent")
	//void BP_MaterialSetVectorParamAll(TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, const struct FLinearColor& InVector) {};

	//UFUNCTION(BlueprintCallable, Category = "TresSkeletalMeshComponent")
	//void BP_MaterialSetVectorParam(int InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, const struct FLinearColor& InVector) {};

	//UFUNCTION(BlueprintCallable, Category = "TresSkeletalMeshComponent")
	//void BP_MaterialSetScalarParamAll(TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar) {};

	//UFUNCTION(BlueprintCallable, Category = "TresSkeletalMeshComponent")
	//void BP_MaterialSetScalarParam(int InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar) {};

	UFUNCTION(BlueprintCallable, Category = "TresSkeletalMeshComponent")
	int BP_GetPredictedLODLevel() { return 0;  };
};

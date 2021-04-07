// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresGame_StructsAndEnums.h"
#include "TresRootComponent.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresRootComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	bool m_bDrawBBox;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	FColor m_BBoxColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	TArray<FTresCollShapeAssetUnit> CollisionShapesSrc;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	TArray<FTresCollShapeAssetUnit> m_AppendCollision;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	UBodySetup* m_pBodySetup;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	bool m_bEnableGrassBump;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	int m_GrassBumpPriority;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	float m_GrassBumpRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	float m_GrassBumpPower;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	float m_GrassBumpDetailPower;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	TEnumAsByte<ETresGrass> m_GrassBumpForceType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	bool m_bNeedOceanSurfacePosture;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	TArray<FVector> m_OceanSurfaceSamplingLocations;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	class UPhysicalMaterial* m_pDetectPhysMaterial;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	class UPhysicalMaterial* m_pDetectWaterPhysMaterial;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	class UPhysicalMaterial* m_pDetectInnerWaterPhysMaterial;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	FHitResult m_WaterSurfaceInfo;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	FCollisionResponseContainer m_DefaultCollisionResponse;
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	struct FTresRootComponentPostPhysicsTickFunction   m_PostPhysTickFunction;
};

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
	bool                                     m_bDrawBBox;                                          // 0x0870(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	FColor                                      m_BBoxColor;                                              // 0x0874(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	TArray<FTresCollShapeAssetUnit>             CollisionShapesSrc;                                       // 0x0878(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	TArray<FTresCollShapeAssetUnit>             m_AppendCollision;                                        // 0x0888(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, DuplicateTransient)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	UBodySetup*                                  m_pBodySetup;                                             // 0x0898(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	bool                                               m_bEnableGrassBump;                                       // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	int                                                m_GrassBumpPriority;                                      // 0x08A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	float                                              m_GrassBumpRange;                                         // 0x08A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	float                                              m_GrassBumpPower;                                         // 0x08AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	float                                              m_GrassBumpDetailPower;                                   // 0x08B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	TEnumAsByte<ETresGrass>                            m_GrassBumpForceType;                                     // 0x08B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	bool                                      m_bNeedOceanSurfacePosture;                           // 0x08BC(0x0001) (Edit, BlueprintVisible)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	TArray<FVector>                             m_OceanSurfaceSamplingLocations;                          // 0x08C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	class UPhysicalMaterial*                           m_pDetectPhysMaterial;                                    // 0x08D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	class UPhysicalMaterial*                           m_pDetectWaterPhysMaterial;                               // 0x08D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	class UPhysicalMaterial*                           m_pDetectInnerWaterPhysMaterial;                          // 0x08E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	FHitResult                                  m_WaterSurfaceInfo;                                       // 0x08E8(0x0088) (Transient, DuplicateTransient, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	FCollisionResponseContainer                 m_DefaultCollisionResponse;                               // 0x0991(0x0020) (Transient, DuplicateTransient)
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRootComponent")
	struct FTresRootComponentPostPhysicsTickFunction   m_PostPhysTickFunction;                                   // 0x09B8(0x0060)
};

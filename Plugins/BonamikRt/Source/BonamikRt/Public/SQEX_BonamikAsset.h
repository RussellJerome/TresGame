// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BonamikRt_StructsAndEnums.h"
#include "SQEX_BonamikAsset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class BONAMIKRT_API USQEX_BonamikAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	class USkeletalMesh* m_SkeletalMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	int32 m_VersionNo;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	FSQEX_BonamikSceneManagerDesc m_SceneManager;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	TArray<FSQEX_BonamikSolverDesc> m_Solvers;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	TArray<FSQEX_BonamikBodyDesc> m_Bodies;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	TArray<FSQEX_BonamikLinkDesc> m_Links;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	TArray<FSQEX_BonamikPlaneDesc> m_Planes;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	TArray<FSQEX_BonamikShapeMatchingDesc> m_ShapeMatchings;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	int32 m_TotalKinematics;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	int32 m_TotalConstraints;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	int32 m_TotalCones;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	int32 m_TotalLinks;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	int32 m_TotalCollisions;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	int32 m_TotalSelfCollisions;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	int32 m_TotalChainRootParticles;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	int32 m_TotalPCLinkCones;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	int32 m_TotalLateralLinkCones;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	bool m_bAlwaysUse60FPSsetting;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	TArray<FName> m_IgnoreEffectors;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	float m_TeleportDistance;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	FString m_BonamikReferenceGroup;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	TArray<FName> m_ReferenceGroups;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	TArray<FString> m_BonamikCheckGroundBodyPosGroups;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	TArray<FName> m_CheckGroundBodyPosGroups;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	TArray<FSQEX_BonamikGroupLOD> m_BonamikGroupLODs;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	bool m_BonamikAccurateBoundsUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAsset")
	int m_PreRollStepOnResume;
};

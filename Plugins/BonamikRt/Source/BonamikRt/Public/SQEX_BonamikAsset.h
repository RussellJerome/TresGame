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
	UPROPERTY()
	class USkeletalMesh* m_SkeletalMesh_DEPRECATED;
	
	UPROPERTY(EditAnywhere, Category = "SQEX")
	int32 m_VersionNo;
	
	UPROPERTY(EditAnywhere, Category = "SQEX")
	FSQEX_BonamikSceneManagerDesc m_SceneManager;
	
	UPROPERTY(EditAnywhere, Category = "SQEX")
	TArray<FSQEX_BonamikSolverDesc> m_Solvers;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<FSQEX_BonamikBodyDesc> m_Bodies;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<FSQEX_BonamikLinkDesc> m_Links;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<FSQEX_BonamikPlaneDesc> m_Planes;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<FSQEX_BonamikShapeMatchingDesc> m_ShapeMatchings;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	int32 m_TotalKinematics;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	int32 m_TotalConstraints;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	int32 m_TotalCones;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	int32 m_TotalLinks;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	int32 m_TotalCollisions;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	int32 m_TotalSelfCollisions;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	int32 m_TotalChainRootParticles;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	int32 m_TotalPCLinkCones;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	int32 m_TotalLateralLinkCones;
	
	UPROPERTY()
	bool m_bAlwaysUse60FPSsetting_DEPRECATED;
	
	UPROPERTY(EditAnywhere, Category = "SQEX")
	TArray<FName> m_IgnoreEffectors;
	
	UPROPERTY(EditAnywhere, Category = "SQEX")
	float m_TeleportDistance;
	
	UPROPERTY()
	FString m_BonamikReferenceGroup_DEPRECATED;
	
	UPROPERTY(EditAnywhere, Category = "SQEX")
	TArray<FName> m_ReferenceGroups;
	
	UPROPERTY()
	TArray<FString> m_BonamikCheckGroundBodyPosGroups_DEPRECATED;
	
	UPROPERTY(EditAnywhere, Category = "SQEX")
	TArray<FName> m_CheckGroundBodyPosGroups;
	
	UPROPERTY(EditAnywhere, Category = "SQEX")
	TArray<FSQEX_BonamikGroupLOD> m_BonamikGroupLODs;
	
	UPROPERTY(EditAnywhere, Category = "SQEX")
	bool m_BonamikAccurateBoundsUpdate;

	UPROPERTY(EditAnywhere, Category = "SQEX")
	int m_PreRollStepOnResume;
};

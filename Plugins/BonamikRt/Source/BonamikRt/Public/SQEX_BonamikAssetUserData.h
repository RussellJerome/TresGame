// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "BonamikRt_StructsAndEnums.h"
#include "SQEX_BonamikAssetUserData.generated.h"

/**
 * 
 */
UCLASS()
class BONAMIKRT_API USQEX_BonamikAssetUserData : public UAssetUserData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAssetUserData")
	TArray<class USQEX_BonamikAsset*> BonamikAssets;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAssetUserData")
	bool m_bAlwaysUse60FPSsetting;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAssetUserData")
	TArray<FName> IgnoreEffectors;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAssetUserData")
	TArray<FName> ReferenceGroups;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAssetUserData")
	TArray<FName> CheckGroundBodyPosGroups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAssetUserData")
	TArray<FSQEX_BonamikGroupLOD> BonamikGroupLODs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAssetUserData")
	float TeleportDistance;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAssetUserData")
	bool bAccurateBoundsUpdate;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAssetUserData")
	int PreRollStepOnResume;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikAssetUserData")
	TEnumAsByte<ESQEX_Bonamik_OutOfCamera> OutOfCamera;
};

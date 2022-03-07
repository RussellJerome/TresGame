// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresParam_e_ex773_Common.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresParam_e_ex773_Common : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Common")
	TArray<struct FTresParam_e_ex773_SpawnParam> ReverseFlareSpawnArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Common")
	float FlareSpawnPosRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Common")
	float BombTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Common")
	float SpawnOffsetZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Common")
	float WallHitHoseiRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Common")
	bool bZDirHoming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Common")
	float AttractTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Common")
	float AttractRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Common")
	float AttractForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Common")
	struct FTresParam_e_ex773_ParamReverseFlareShot ReverseFlareShotParameter;
};

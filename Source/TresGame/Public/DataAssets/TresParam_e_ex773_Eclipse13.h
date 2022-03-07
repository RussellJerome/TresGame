// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresParam_e_ex773_Eclipse13.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresParam_e_ex773_Eclipse13 : public UDataAsset
{
	GENERATED_BODY()
public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Eclipse13")
	//class UTres_e_ex773_Eclipse13_WaveArrayAsset* pShellMoveArrayAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Eclipse13")
	float Shell_SizeMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Eclipse13")
	float Shell_SizeMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Eclipse13")
	class UCurveFloat* Shell_SizeCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Eclipse13")
	TArray<class UCurveFloat*> Exp_CurveFloatArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Eclipse13")
	TArray<float> Exp_ScaleArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresParam_e_ex773_Eclipse13")
	int Exp_MaxHitCount;
};

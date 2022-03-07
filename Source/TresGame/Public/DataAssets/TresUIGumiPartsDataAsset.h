// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIGumiPartsDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIGumiPartsDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiPartsDataAsset")
	class UDataTable* EdgeGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiPartsDataAsset")
	class UDataTable* CurveGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiPartsDataAsset")
	class UDataTable* PipeGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiPartsDataAsset")
	class UDataTable* AeroGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiPartsDataAsset")
	class UDataTable* ShootingGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiPartsDataAsset")
	class UDataTable* LaserGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiPartsDataAsset")
	class UDataTable* StrikeGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiPartsDataAsset")
	class UDataTable* EngineGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiPartsDataAsset")
	class UDataTable* WingGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiPartsDataAsset")
	class UDataTable* WheelGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiPartsDataAsset")
	class UDataTable* CockpitGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiPartsDataAsset")
	class UDataTable* ShieldGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiPartsDataAsset")
	class UDataTable* OptionGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiPartsDataAsset")
	class UDataTable* CharacterGummiDataTable;
};

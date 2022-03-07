// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGumiShipPlayerParameterDataTableSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresGumiShipPlayerParameterDataTableSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipPlayerParameterDataTableSet")
	class UDataTable* m_pBaseParameterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipPlayerParameterDataTableSet")
	class UDataTable* m_pStrikeGumiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipPlayerParameterDataTableSet")
	TArray<class UClass*> m_PlayerStateEventCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipPlayerParameterDataTableSet")
	class UClass* m_SmartphoneCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipPlayerParameterDataTableSet")
	class UForceFeedbackEffect* m_pForceFeedBackForGameOver;
};

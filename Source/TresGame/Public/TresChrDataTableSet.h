// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresVoiceGroupSet.h"
#include "TresChrDataTableSet.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TRESGAME_API UTresChrDataTableSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataTableSet")
	TEnumAsByte<ETresChrDataTableSetType> m_DataType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataTableSet")
	class UDataTable* m_BaseParamData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataTableSet")
	class UDataTable* m_LevelData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataTableSet")
	class UDataTable* m_AttackData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataTableSet")
	UTresVoiceGroupSet* m_VoiceData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresChrDataTableSet")
	class UDataTable* m_SEData;
};

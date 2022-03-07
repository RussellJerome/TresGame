// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresAccompanyPawnBase.h"
#include "TresAttractionPawnBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresAttractionPawnBase : public ATresAccompanyPawnBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttractionPawnBase")
	FVector m_Param_FCameraLocalOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttractionPawnBase")
	FRotator m_Param_FCameraRotMin;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttractionPawnBase")
	FRotator m_Param_FCameraRotMax;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttractionPawnBase")
	class ATresCameraFirstPerson* m_FCamera;
};

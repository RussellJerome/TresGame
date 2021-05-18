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
	FVector m_Param_FCameraLocalOffset;
	FRotator m_Param_FCameraRotMin;
	FRotator m_Param_FCameraRotMax;
	//class ATresCameraFirstPerson* m_FCamera;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresAIController.h"
#include "TresComNpcController.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresComNpcController : public ATresAIController
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresComNpcController")
	bool m_bNoPawnDestroy;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresComNpcController")
	//struct FAIRequestID m_MoveRequestID;
};

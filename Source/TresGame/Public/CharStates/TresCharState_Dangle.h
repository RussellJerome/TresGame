// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresCharState_Dangle.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresCharState_Dangle : public UTresStateBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharState_Dangle")
	class AActor* m_pAttachActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharState_Dangle")
	class UPrimitiveComponent* m_pAttachComponent;
};

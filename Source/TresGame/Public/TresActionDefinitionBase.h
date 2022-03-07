// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresActionDefinitionBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresActionDefinitionBase : public UTresStateBase
{
	GENERATED_BODY()
public:
	/*Target Reference*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresActionDefinitionBase")
	TWeakObjectPtr<class AActor> m_Target;

	/*The Destination based on a vector value (position)*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresActionDefinitionBase")
	FVector m_Destination;

	/*Lockon Target Reference*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresActionDefinitionBase")
	TWeakObjectPtr<class USceneComponent> m_LockonTarget;

	/*Array of Viable States*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresActionDefinitionBase")
	TArray<TEnumAsByte<ETresStateID>> m_ViableStates;

	/*Allows this action to Abort Permission*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresActionDefinitionBase")
	bool m_bActionAbortPermission;

	/*The Substep*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresActionDefinitionBase")
	int m_SubStep;
};

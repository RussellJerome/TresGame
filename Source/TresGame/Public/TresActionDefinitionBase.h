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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresActionDefinitionBase")
	TWeakObjectPtr<class AActor> m_Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresActionDefinitionBase")
	FVector m_Destination;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresActionDefinitionBase")
	TWeakObjectPtr<class USceneComponent> m_LockonTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresActionDefinitionBase")
	TArray<TEnumAsByte<ETresStateID>> m_ViableStates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresActionDefinitionBase")
	bool m_bActionAbortPermission;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresActionDefinitionBase")
	int m_SubStep;
};

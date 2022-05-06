// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Note.h"
#include "TresGame.h"
#include "TresAINote.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresAINote : public ANote
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAINote")
	TEnumAsByte<ETresAIAction::Type> m_ActionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAINote")
	class UClass* m_Action;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAINote")
	bool m_bAction;

	virtual void CheckForErrors() override {};
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Note.h"
#include "TresNote.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresNote : public ANote
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNote")
	FName m_Id;

	virtual void CheckForErrors() override {};
};

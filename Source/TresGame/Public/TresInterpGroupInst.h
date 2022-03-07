// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGame.h"
#include "Matinee/InterpGroupInst.h"
#include "TresInterpGroupInst.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresInterpGroupInst : public UInterpGroupInst
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresInterpGroupInst")
	TArray<struct FTresInterpGroupInstUpdateSettings> m_UpdateSettings;

	virtual AActor* GetGroupActor() const override { return nullptr; }
	virtual void SaveGroupActorState() override {}
	virtual void RestoreGroupActorState() override {}
	virtual void InitGroupInst(UInterpGroup * InGroup, AActor * InGroupActor) override {}
	virtual void TermGroupInst(bool bDeleteTrackInst) override {}
};

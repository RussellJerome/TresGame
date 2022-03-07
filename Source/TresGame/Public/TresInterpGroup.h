// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Matinee/InterpGroup.h"
#include "TresInterpGroup.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresInterpGroup : public UInterpGroup
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresInterpGroup")
	FString m_CharacterMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresInterpGroup")
	FName m_TargetActorTag;

	virtual void PostLoad() override {}
	virtual void UpdateGroup(float NewPosition, class UInterpGroupInst * GrInst, bool bPreview, bool bJump) override {}
	virtual AActor* SelectGroupActor(class UInterpGroupInst * GrInst, bool bDeselectActors) override { return nullptr; }
	virtual AActor* DeselectGroupActor(class UInterpGroupInst * GrInst) override { return nullptr; }
};

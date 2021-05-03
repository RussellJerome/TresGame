// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SQEXSEADWhizSeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SQEXSEAD_API USQEXSEADWhizSeComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADWhizSeComponent")
	float ApproachJudgmentDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADWhizSeComponent")
	float ApproachJudgmentVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADWhizSeComponent")
	bool bFollow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADWhizSeComponent")
	bool bOnlyOnce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADWhizSeComponent")
	bool bUseRelativeVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADWhizSeComponent")
	bool bCalcVelocityFromLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADWhizSeComponent")
	class UAudioComponent* MyAudioComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADWhizSeComponent")
	class UMeshComponent* MyMeshComponent;
};

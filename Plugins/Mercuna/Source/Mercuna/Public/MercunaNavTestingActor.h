// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mercuna_StructsAndEnums.h"
#include "MercunaNavTestingActor.generated.h"

UCLASS()
class MERCUNA_API AMercunaNavTestingActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavTestingActor")
	float Radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavTestingActor")
	bool bSearchStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavTestingActor")
	class AMercunaNavTestingActor* OtherActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavTestingActor")
	bool bPathExist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavTestingActor")
	bool bPathIsPartial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavTestingActor")
	bool bPathIsOutOfNodes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavTestingActor")
	float PathLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavTestingActor")
	int PathSteps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavTestingActor")
	float PathFindTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavTestingActor")
	int PathNodesUsed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavTestingActor")
	class USphereComponent* SphereComponent;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavTestingActor")
	//class UMercunaPath* Path;

	UFUNCTION(BlueprintCallable, Category = "MercunaNavTestingActor")
	void OnPathUpdate(TEnumAsByte<EMercunaPathEvent> PathEvent) {};
};

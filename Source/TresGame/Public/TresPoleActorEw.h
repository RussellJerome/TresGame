// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresPoleActorEw.generated.h"

UCLASS()
class TRESGAME_API ATresPoleActorEw : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPoleActorEw")
	class USceneComponent* MyRootComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPoleActorEw")
	class UTresPoleComponent* PoleComponentDefault;

	UFUNCTION(BlueprintCallable, Category = "TresPoleActorEw")
	void SetEnable(bool bEnable) {};

	UFUNCTION(BlueprintPure, Category = "TresPoleActorEw")
	bool IsEnable() { return false; };
};

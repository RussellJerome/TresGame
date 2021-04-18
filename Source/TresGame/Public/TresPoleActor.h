// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresPoleActor.generated.h"

UCLASS()
class TRESGAME_API ATresPoleActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPoleActor")
	class UTresPoleComponent* MyRoot;

	UFUNCTION(BlueprintCallable, Category = "TresPoleActor")
	void SetEnable(bool bEnable) {};

	UFUNCTION(BlueprintPure, Category = "TresPoleActor")
	bool IsEnable() { return false; };
};

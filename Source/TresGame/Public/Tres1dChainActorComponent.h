// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "Tres1dChainActorComponent.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTres1dChainActorComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tres1dChainActorComponent")
	class AActor* PrevActor;

	UFUNCTION(BlueprintCallable, Category = "Tres1dChainActorComponent")
	void SetPrev(class AActor* Actor) {};

	UFUNCTION(BlueprintCallable, Category = "Tres1dChainActorComponent")
	void SetNext(class AActor* Actor) {};
};

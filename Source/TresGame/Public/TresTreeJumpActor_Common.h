// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresTreeJumpActor_Common.generated.h"

UCLASS()
class TRESGAME_API ATresTreeJumpActor_Common : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreeJumpActor_Common")
	class USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreeJumpActor_Common")
	class UBoxComponent* BoxComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreeJumpActor_Common")
	class UBoxComponent* OverlapBox;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreeJumpActor_Common")
	//TArray<struct FTresNavLinkSet_Common> NavLinkSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreeJumpActor_Common")
	bool bRefreshNavLink;

	UFUNCTION(BlueprintCallable, Category = "TresTreeJumpActor_Common")
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex) {};

	UFUNCTION(BlueprintCallable, Category = "TresTreeJumpActor_Common")
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {};
};

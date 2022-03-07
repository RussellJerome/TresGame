// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mercuna_StructsAndEnums.h"
#include "MerNavOctreeRenderingComponent.h"
#include "MercunaNavOctree.generated.h"

UCLASS()
class MERCUNA_API AMercunaNavOctree : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavOctree")
	float CellSize = 32.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavOctree")
	int MinPawnRadius = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavOctree")
	int MaxPawnRadius = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavOctree")
	TEnumAsByte<EMerOctreeDebugDrawMode> DebugDrawMode;

	UPROPERTY()
	UMerNavOctreeRenderingComponent* MerNavOctreeRenderingComponent;

	UPROPERTY()
	bool bBuildAsSublevel;

	UPROPERTY()
	bool bNeedsRebuild;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavOctree")
	FVector m_origin;

	UFUNCTION(BlueprintCallable, Category = "MercunaNavOctree")
	void Raycast(const FVector& Start, const FVector& End, float NavigationRadius, FVector& HitPosition, bool& RayHit) {};

	UFUNCTION(BlueprintCallable, Category = "MercunaNavOctree")
	void IsNavigableMulti(TArray<FVector> Positions, float NavigationRadius, TArray<bool>& Results) {};

	UFUNCTION(BlueprintCallable, Category = "MercunaNavOctree")
	void IsNavigable(const FVector& Position, float NavigationRadius, bool& Result) {};

	UFUNCTION(BlueprintPure, Category = "MercunaNavOctree")
	class UMercunaPath* FindPathToLocation(const FVector& Start, const FVector& End, float NavigationRadius, bool AllowPartial, float MaxPathLength) { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "MercunaNavOctree")
	class UMercunaPath* FindPathToActor(const FVector& Start, class AActor* GoalActor, float NavigationRadius, bool AllowPartial, float MaxPathLength) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "MercunaNavOctree")
	void ClampToNavigable(const FVector& Position, float NavigationRadius, float SearchRadius, FVector& ClampedPosition, bool& Result) {};

	UFUNCTION(BlueprintCallable, Category = "MercunaNavOctree")
	void CheckReachable(const FVector& Start, const FVector& End, float NavigationRadius, float MaxPathLength, bool& Result) {};

	virtual void OnConstruction(const FTransform& Transform) override
	{
		Super::OnConstruction(Transform);

		if (!IsValid(MerNavOctreeRenderingComponent))
		{
			MerNavOctreeRenderingComponent = NewObject<UMerNavOctreeRenderingComponent>(this, "MerNavOctreeRenderingComponent");
			MerNavOctreeRenderingComponent->CreationMethod = EComponentCreationMethod::Native;
			MerNavOctreeRenderingComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
			MerNavOctreeRenderingComponent->RegisterComponent();
		}
	};
};

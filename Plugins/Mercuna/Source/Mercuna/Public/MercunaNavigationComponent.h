// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Mercuna_StructsAndEnums.h"
#include "MercunaNavigationComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MERCUNA_API UMercunaNavigationComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	//struct FScriptMulticastDelegate OnMoveCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavigationComponent")
	struct FMercunaNavigationConfiguration Configuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavigationComponent")
	bool Pathfinding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavigationComponent")
	bool DynamicAvoidance;

	UFUNCTION(BlueprintCallable, Category = "MercunaNavigationComponent")
	void TrackActor(class AActor* Actor, float Distance, float Speed) {};

	UFUNCTION(BlueprintCallable, Category = "MercunaNavigationComponent")
	void Stop() {};

	UFUNCTION(BlueprintCallable, Category = "MercunaNavigationComponent")
	void SetAvoidanceAgainst(class AActor* Actor, bool Enable) {};

	UFUNCTION(BlueprintCallable, Category = "MercunaNavigationComponent")
	void MoveToLocation(const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath) {};

	UFUNCTION(BlueprintCallable, Category = "MercunaNavigationComponent")
	void MoveToActor(class AActor* Actor, float EndDistance, float Speed, bool UsePartialPath) {};

	//void MercunaMoveComplete__DelegateSignature(const struct FAIRequestID& RequestID, TEnumAsByte<EMercunaMoveResult> Result) {};

	UFUNCTION(BlueprintCallable, Category = "MercunaNavigationComponent")
	void LookAt(class AActor* Actor, float MaxPitch) {};

	UFUNCTION(BlueprintCallable, Category = "MercunaNavigationComponent")
	void GetPathInfo(bool& Valid, float& DistanceToEnd, FVector& NextPathPoint, bool& bIsFinalPoint) {};

	UFUNCTION(BlueprintCallable, Category = "MercunaNavigationComponent")
	void ConfigureMovement(bool bUsePathfinding, bool bUseDynamicAvoidance) {};

	UFUNCTION(BlueprintCallable, Category = "MercunaNavigationComponent")
	void Configure(const struct FMercunaNavigationConfiguration& NewConfiguration) {};

	UFUNCTION(BlueprintCallable, Category = "MercunaNavigationComponent")
	void ClearAvoidanceExclusions() {};

	//void CheckReachable(const FVector& Point, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, bool* Success) {};

	UFUNCTION(BlueprintCallable, Category = "MercunaNavigationComponent")
	void CancelMovement() {};

	UFUNCTION(BlueprintCallable, Category = "MercunaNavigationComponent")
	void CancelLookAt() {};
};

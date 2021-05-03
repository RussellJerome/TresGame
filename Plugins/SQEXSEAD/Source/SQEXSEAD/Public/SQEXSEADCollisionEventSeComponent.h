// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SQEXSEADCollisionEventSeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SQEXSEAD_API USQEXSEADCollisionEventSeComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADCollisionEventSeComponent")
	class USoundBase* OnHitSoundAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADCollisionEventSeComponent")
	class USoundBase* OnPawnHitSoundAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADCollisionEventSeComponent")
	float HitDistanceThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADCollisionEventSeComponent")
	class USoundBase* OnBeginOverlapSoundAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADCollisionEventSeComponent")
	class USoundBase* OnEndOverlapSoundAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADCollisionEventSeComponent")
	bool bPawnOverlapOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADCollisionEventSeComponent")
	class USoundBase* OnFractureSoundAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADCollisionEventSeComponent")
	class UMeshComponent* MyMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADCollisionEventSeComponent")
	class UDestructibleComponent* MyDestructibleComponent;

	/*void OnFracture(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);*/
};

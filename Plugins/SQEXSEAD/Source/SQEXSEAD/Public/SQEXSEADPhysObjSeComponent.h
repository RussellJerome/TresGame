// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SQEXSEADPhysObjSeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SQEXSEAD_API USQEXSEADPhysObjSeComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADPhysObjSeComponent")
	class USQEXSEADPhysObjSeComponentSetting* Setting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADPhysObjSeComponent")
	class UMeshComponent* MyMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADPhysObjSeComponent")
	class UAudioComponent* VelocityAudioComponent;

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADPhysObjSeComponent")
	void StopCalculation(float StopInnerSoundsFadeTime) {};

	//void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};

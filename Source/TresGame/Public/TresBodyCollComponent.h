// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TresGame_StructsAndEnums.h"
#include "TresBodyCollComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRESGAME_API UTresBodyCollComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UTresBodyCollComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollComponent")
	TArray<class UPrimitiveComponent*> m_IBodyPrims;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollComponent")
	TArray<class UTresRootComponent*> m_BaseColls;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollComponent")
	TArray<class AActor*> m_IgnoreActors;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollComponent")
	bool m_bEnableTeamCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollComponent")
	bool m_bCreatePhysAssetCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollComponent")
	bool m_bCanbeRidePhysAssetCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollComponent")
	class UPhysicsAsset* m_BaseAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollComponent")
	FName m_RigidPhysCollisionPreset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollComponent")
	TArray<struct FTresOverlapInfo> m_OverlapList;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "TresBodyCollComponent")
	void OnBodyEndOverlap(class UTresBodyCollPrimitive* MyPrim, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBodyEndOverlap_Implementation(class UTresBodyCollPrimitive* MyPrim, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "TresBodyCollComponent")
	void OnBodyBeginOverlap(class UTresBodyCollPrimitive* MyPrim, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnBodyBeginOverlap_Implementation(class UTresBodyCollPrimitive* MyPrim, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult) {};
};

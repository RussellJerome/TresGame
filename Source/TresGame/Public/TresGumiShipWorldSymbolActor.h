// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "TresGumiShipWorldSymbolActor.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGumiShipWorldSymbolActor : public ATresGumiShipGimmickActorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipWorldSymbolActor")
	TEnumAsByte<ETresGumiShipWorldSymbolID> WorldMapID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipWorldSymbolActor")
	TEnumAsByte<ETresWorldCode> WorldCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipWorldSymbolActor")
	FVector CameraOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipWorldSymbolActor")
	class USphereComponent* ApproachCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipWorldSymbolActor")
	float IconRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipWorldSymbolActor")
	float MistRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipWorldSymbolActor")
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipWorldSymbolActor")
	bool IsLocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipWorldSymbolActor")
	bool IsLockedByBoss;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipWorldSymbolActor")
	class UStaticMeshComponent* WorldIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipWorldSymbolActor")
	class UStaticMeshComponent* WorldMist;

	UFUNCTION(BlueprintNativeEvent, Category = "TresGumiShipWorldSymbolActor")
	void OnLeaveGoalVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int OtherBodyIndex);
	void OnLeaveGoalVolume_Implementation(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int OtherBodyIndex) {};
	
	UFUNCTION(BlueprintNativeEvent, Category = "TresGumiShipWorldSymbolActor")
	void OnHitGoalVolume(class UPrimitiveComponent* pHitComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, const FVector& vNormalImpulse, const FHitResult& rHit);
	void OnHitGoalVolume_Implementation(class UPrimitiveComponent* pHitComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, const FVector& vNormalImpulse, const FHitResult& rHit) {};
	
	UFUNCTION(BlueprintNativeEvent, Category = "TresGumiShipWorldSymbolActor")
	void OnEnterGoalVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	void OnEnterGoalVolume_Implementation(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {};
	
	UFUNCTION(BlueprintNativeEvent, Category = "TresGumiShipWorldSymbolActor")
	void OnCancel();
	void OnCancel_Implementation() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipWorldSymbolActor")
	void LockWorldByBoss(bool LockEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipWorldSymbolActor")
	void LockWorld(bool Locked) {};

	UFUNCTION(BlueprintPure, Category = "TresGumiShipWorldSymbolActor")
	ETresGumiShipWorldSymbolID GetWorldMapID() { return ETresGumiShipWorldSymbolID::E_GM01_WS_HE; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipWorldSymbolActor")
	bool CheckLanding() { return false; };
};

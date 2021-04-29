// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVehiclePawnBase.h"
#include "TresGimmickBalanceBall.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGimmickBalanceBall : public ATresVehiclePawnBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickBalanceBall")
	class USceneComponent* BallRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickBalanceBall")
	class UParticleSystemComponent* SignEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickBalanceBall")
	class USphereComponent* TickSensor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickBalanceBall")
	class UCapsuleComponent* BlockCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickBalanceBall")
	float m_ParamSpeedDumping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickBalanceBall")
	float m_ParamAccelSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickBalanceBall")
	float m_ParamReflection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickBalanceBall")
	float m_ParamBallSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickBalanceBall")
	float m_ParamMoveThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickBalanceBall")
	bool m_CanbePushed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickBalanceBall")
	float m_PawnPushPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickBalanceBall")
	float m_AttackPushPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickBalanceBall")
	bool ReturnToInitialWhenCutScenes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickBalanceBall")
	bool m_CheckSpawnPoint;

	UFUNCTION(BlueprintCallable, Category = "TresGimmickBalanceBall")
	void SetSensorEnable(bool Enable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickBalanceBall")
	void SetIgnoreLanding(bool InIgnore) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickBalanceBall")
	void SetFadeParam(float Param) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickBalanceBall")
	void SetEmphasis(bool Enable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickBalanceBall")
	void SetCurrentAttackName(const FName& AttackName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickBalanceBall")
	bool SetCollisionEnable(bool bEnable) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGimmickBalanceBall")
	void SetAttachmentComp(class USceneComponent* pAttachComp) {};

	/*void OnReflectBalanceBall(const FHitResult& Impact) {};
	void OnEndSensorOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex) {};
	void OnBeginSensorOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {};
	void NotifyChangeGimmickPause(bool bPause) {};
	void NotifyChangeGimmickActionImpl(bool bShow) {};
	void NotifyChangeBallSpeed(const FVector& Speed, float fRatio) {};
	void NotifyChangeBallEntried(bool Entry) {};*/

	UFUNCTION(BlueprintPure, Category = "TresGimmickBalanceBall")
	class USphereComponent* GetEntrySensorComponent() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresGimmickBalanceBall")
	float GetBalanceBallSize() { return 0.0f; };


	UFUNCTION(BlueprintCallable, Category = "TresGimmickBalanceBall")
	void EndOverlap(class ATresCharPawnBase* pPawn) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickBalanceBall")
	void BeginOverlap(class ATresCharPawnBase* pPawn) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickBalanceBall")
	void BalanceBallRemoveCollisionShape(const FName& InTagName, bool bUpdate) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickBalanceBall")
	void BalanceBallAppendCollisionShape(const FName& InTagName, const FVector& InSize, const FVector& InRelativeLocaiton, const FRotator& InRelativeRotation, bool bUpdate) {};
};

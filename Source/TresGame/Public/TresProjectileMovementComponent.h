// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "TresGame.h"
#include "TresProjectileMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresProjectileMovementComponent : public UProjectileMovementComponent
{
	GENERATED_BODY()
public:
	//struct FScriptMulticastDelegate OnTickMove;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_Accel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	class UCurveFloat* m_VelocityCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	bool m_bVelocityCurveLoop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	bool m_bDisableMovementProc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	bool m_bEnableMapHitNormalCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_CheckMapHitNormal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	bool m_bQuaternionFollowsVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_fQuaternionFollowsVelRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	bool m_bWaitMoveStartOnce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_fMoveStartDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	bool m_bEnableHoming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_HomingStartDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_HomingMinDist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	bool m_bIgnoreHomingZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	TEnumAsByte<ETresProjectileHomingType> m_HomingType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_HomingMaxAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_HomingTurnMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_HomingTurnAccel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_HomingMaxTurnMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	class UCurveFloat* m_HomingTurnMaxCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	bool m_bHomingTurnMaxCurveLoop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_HomingMaxAnglePITCH;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_HomingTurnMaxPITCH;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_HomingTurnAccelPITCH;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_HomingMaxTurnMaxPITCH;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	class UCurveFloat* m_HomingTurnMaxCurvePITCH;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	bool m_bHomingTurnMaxCurveLoopPITCH;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_StepUpHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	class AActor* m_HomingTargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	class UTresLockonTargetComponent* m_HomingTargetComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	bool m_bEnableSpin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	struct FRotator m_Spin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_SpinStartDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	float m_SpinMaxTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	bool m_bEnableUpdatedComponentScaleAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileMovementComponent")
	struct FTresScaleVectorAnim m_ScaleAnim;

	//void OnMoveTickDelegate__DelegateSignature(float InDeltaTime);
};

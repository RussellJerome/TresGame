// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresGame.h"
#include "TresGimmickSimpleMovement.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRESGAME_API UTresGimmickSimpleMovement : public UActorComponent
{
	GENERATED_BODY()
public:
	//TScriptInterface<class UTresGimmickSimpleMovementProgressInterface> m_Progress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSimpleMovement")
	bool m_bEnableMove;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSimpleMovement")
	TEnumAsByte<ETresGimmickSimpleMovementMoveType> m_MoveType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSimpleMovement")
	TEnumAsByte<ETresGimmickSimpleMovementAcclType> m_AcclType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSimpleMovement")
	class AActor* m_MoveTargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSimpleMovement")
	float m_InitialVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSimpleMovement")
	float m_Acceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSimpleMovement")
	class UCurveFloat* m_UnitAccelerationCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSimpleMovement")
	float m_MaxVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSimpleMovement")
	float m_MaxMoveLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSimpleMovement")
	TEnumAsByte<ETresGimmickSimpleMovementDirAxis> m_Direction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSimpleMovement")
	bool m_bEnableSweep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSimpleMovement")
	float m_HomingRotSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSimpleMovement")
	class UCurveFloat* m_UnitParabolaCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSimpleMovement")
	float m_ParabolaHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSimpleMovement")
	class UCurveFloat* m_UnitInterpRotationCurve;

	//struct FScriptMulticastDelegate                    OnFinishMove;

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSimpleMovement")
	void BP_StopMove() {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSimpleMovement")
	void BP_StartMove() {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSimpleMovement")
	void BP_SetTargetLocation(const FVector& Location) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSimpleMovement")
	void BP_SetMoveType(TEnumAsByte<ETresGimmickSimpleMovementMoveType> Type) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSimpleMovement")
	void BP_SetMoveTargetActor(class AActor* Actor) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSimpleMovement")
	void BP_SetMaxMoveVelocity(float Velocity) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSimpleMovement")
	void BP_SetEnableSweep(bool Enable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSimpleMovement")
	void BP_SetAcceleration(float Acceleration) {};

	//void BP_OnFinishMove() {};

	UFUNCTION(BlueprintPure, Category = "TresGimmickSimpleMovement")
	FVector BP_GetTargetLocation() { return FVector::FVector();  };

	UFUNCTION(BlueprintPure, Category = "TresGimmickSimpleMovement")
	FTransform BP_GetStartTransform() { return FTransform::FTransform(); };

	UFUNCTION(BlueprintPure, Category = "TresGimmickSimpleMovement")
	float BP_GetMaxMoveVelocity() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresGimmickSimpleMovement")
	float BP_GetAcceleration() { return 0.0f; };
};

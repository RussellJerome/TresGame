// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresCameraBase.h"
#include "TresGame_StructsAndEnums.h"
#include "TresCameraTarget.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresCameraTarget : public ATresCameraBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraTarget")
	FVector m_LookPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraTarget")
	FVector m_CameraLocalOffset;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraTarget")
	//struct FTresCameraTargetInfo m_TargetInfo;

	UFUNCTION(BlueprintCallable, Category = "TresCameraTarget")
	void SetTresCameraTargetInfluenceRotationValue(bool bYaw, bool bPitch, bool bRoll, const struct FRotator& TargetRotation) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraTarget")
	void SetTresCameraTargetInfluenceRotation(bool bAlways, float AlWaysTime, bool bYaw, bool bPitch, bool bRoll) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraTarget")
	void SetTresCameraTargetInfluenceLocationXYZ(bool bAlwaysXY, bool bAlwaysZ) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraTarget")
	void SetTresCameraTargetInfluenceLocation(bool bAlways) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraTarget")
	void SetTargetBoneName(const FName& BoneName) {};

	//UFUNCTION(BlueprintCallable, Category = "TresCameraTarget")
	//void SetOutsideWallCheckType(TEnumAsByte<ETresCameraTargetWallCheckType> WallCheckType, const struct FVector& TargetPos, const struct FName& TargetBoneName, class ATresAccompanyPawnBase* TargetAccompanyPawn) {};

	UFUNCTION(BlueprintPure, Category = "TresCameraTarget")
	FVector GetTargetOffset() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresCameraTarget")
	FVector GetTargetLocalOffset() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresCameraTarget")
	FName GetTargetBoneName() { return FName::FName(); };

	UFUNCTION(BlueprintPure, Category = "TresCameraTarget")
	FVector GetDefaultTargetOffset() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresCameraTarget")
	FVector GetDefaultTargetLocalOffset() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresCameraTarget")
	FVector GetDefaultCameraLocalOffset() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresCameraTarget")
	FVector GetCameraLocalOffset() { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "TresCameraTarget")
	void EnableCollision(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraTarget")
	void BP_SetTresCameraLocalOffset(const FVector& CameraLocalOffset, float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraTarget")
	void BP_SetTargetOffset(const FVector& TargetOffset, float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraTarget")
	void BP_SetTargetLocalOffset(const struct FVector& TargetLocalOffset, float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraTarget")
	void BP_SetTargetComponent(class UTresLockonTargetComponent* pTargetComp) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraTarget")
	void BP_RemoveCollisionIgnoredActor(class AActor* Actor) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraTarget")
	bool BP_IsAttachTresCameraTarget() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresCameraTarget")
	void BP_AttachTresCameraTarget(bool bAttach) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraTarget")
	void BP_AddCollisionIgnoredActor(class AActor* Actor) {};
};

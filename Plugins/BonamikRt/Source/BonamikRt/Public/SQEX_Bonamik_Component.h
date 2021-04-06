// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "BonamikRt_StructsAndEnums.h"
#include "SQEX_Bonamik_Component.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BONAMIKRT_API USQEX_Bonamik_Component : public USceneComponent
{
	GENERATED_BODY()

public:	
	USQEX_Bonamik_Component();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_Bonamik_Component")
	bool bHasSkeletalMeshSkippedTransforms;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_Bonamik_Component")
	class USQEX_BonamikAsset* m_BonamikAsset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_Bonamik_Component")
	class USkeletalMeshComponent* SkeletalMeshComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_Bonamik_Component")
	class UCharacterMovementComponent* CharacterMovementComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_Bonamik_Component")
	bool m_BonamikEnable;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_Bonamik_Component")
	bool m_BonamikAutoDisable;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_Bonamik_Component")
	bool bAccurateBoundsUpdate;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_Bonamik_Component")
	int PreRollStepOnResume;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_Bonamik_Component")
	float PrevScreenSize;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_SetEmissiveWindScale(TArray<FString> Groups, float Scale, bool bApplyToChildren) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_TurnOff(bool preserveLatestResult, TArray<FString> Groups, float BlendTime) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetWorldWindScale(TArray<FString> Groups, float Scale) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetWeight(float Weight, float WeightChangeTime, bool ResetWhenNonZeroWeight, bool AutoDisable) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetUpdateOnlyVisible(bool bUpdateOnlyVisible) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetUpdateOnlyRendered(bool bUpdateOnlyRendered) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetTeleportDistance(float Distance, int TeleportPreRollStep, bool bApplyToChildren) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetSpeedRate(float SpeedRate, float SpeedRateChangeTime, bool bApplyToChildren) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetPresetWindScale(TArray<FName> PresetNames, float Scale) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetPreRoll(int step, bool bApplyToChildren) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetOuterConeScale(TArray<FString> Groups, float Scale) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetLocalForceScale(TArray<FString> Groups, float Scale) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetInnerConeScale(TArray<FString> Groups, float Scale) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetGroupWeight(TArray<FString> Groups, float Weight, float WeightChangeTime, bool ResetWhenNonZeroWeight, bool AutoDisable) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetGroupParam(TArray<FSQEX_BonamikChangingParameter> GroupParam) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetGravity(const FVector& Gravity) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetEnableGroundCollisionAll(bool bNewEnable) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetEnableGroundCollision(TArray<FString> Groups, bool bNewEnable) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetEnable(bool NewEnable) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetEmissiveWind(TArray<FString> Groups, int DirectionSpace, const FVector& DirectionVec, float BaseStrength, float WaveAmplitude, float WaveFreq, float BlendTime, bool bApplyToChildren) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetAutoDisable(bool AutoDisable) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_SetAnimPos(int BoneIndex, bool bForceSet) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_RestoreGroupParam(TArray<FSQEX_BonamikChangingParameter> GroupParam) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_RestoreDefaultParameters() {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_ResetGravity() {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_Reset(bool bResetPose, bool bApplyToChildren) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_RemoveReferenceDefault() {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_RemoveReferenceCommon(class USQEX_Bonamik_Component* OtherComponent) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_RemoveReferenceAll() {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_RemoveReference(class USQEX_Bonamik_Component* OtherComponent, const FString& ReferenceGroupName) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_ReinitializeSimulationPose() {};

	UFUNCTION(BlueprintPure, Category="SQEX_Bonamik_Component")
	bool SQEX_Bonamik_IsSetup() { return false; };

	UFUNCTION(BlueprintPure, Category="SQEX_Bonamik_Component")
	bool SQEX_Bonamik_IsEnable() { return false; };

	UFUNCTION(BlueprintPure, Category="SQEX_Bonamik_Component")
	bool SQEX_Bonamik_IsAutoDisable() { return false; };

	UFUNCTION(BlueprintPure, Category="SQEX_Bonamik_Component")
	float SQEX_Bonamik_GetWeight() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category="SQEX_Bonamik_Component")
	float SQEX_Bonamik_GetTeleportDistance() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category="SQEX_Bonamik_Component")
	float SQEX_Bonamik_GetSpeedRate() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category="SQEX_Bonamik_Component")
	FVector SQEX_Bonamik_GetGravity() { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_EnablePresetWind(TArray<FName> PresetNames) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_DisablePresetWind(TArray<FName> PresetNames) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_ClearEmissiveWind(float BlendTime, bool bApplyToChildren) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_ClearAllPresetWind() {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_AddReferenceDefault() {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_AddReferenceCommon(class USQEX_Bonamik_Component* OtherComponent) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_Bonamik_Component")
	void SQEX_Bonamik_AddReference(class USQEX_Bonamik_Component* OtherComponent, const FString& ReferenceGroupName) {};
	
};

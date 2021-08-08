// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGumiShipCharaPawnBase.h"
#include "TresGumiShipPlayerPawnBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGumiShipPlayerPawnBase : public ATresGumiShipCharaPawnBase
{
	GENERATED_BODY()
public:
	/*struct FScriptMulticastDelegate m_OnChangeAccelCompoDispather;
	struct FScriptMulticastDelegate m_OnChangeSpeedDispather;*/

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipPlayerPawnBase")
	class UTresGumiShipFSM* m_pFSM;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipPlayerPawnBase")
	class UTresGumiShipSoundSetComponent* m_pSoundSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipPlayerPawnBase")
	class UTresGumiShipPlayerMovementCompoBase* m_pMovementCompo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipPlayerPawnBase")
	class UTresGumiShipPlayerAccelerationBase* m_pAcceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipPlayerPawnBase")
	class UTresGumiShipPlayerSpringArmCompo* m_pCameraSpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipPlayerPawnBase")
	class UTresGumiShipEffectSetComponent* m_pEffectSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipPlayerPawnBase")
	class UTresPlayerStateEventComponent* m_pStateEvent;*/

	//void TresGumiShipChangeSpeed__DelegateSignature(float fOldSeed, float fNewSpeed, float fRatio);
	//void TresGumiShipChangeAccelCompo__DelegateSignature(class UTresGumiShipPlayerAccelerationBase* pCompo);

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipPlayerPawnBase")
	void SetOutsideMaxSpeed(float fSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipPlayerPawnBase")
	void SetMovementEnable(bool bIn) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipPlayerPawnBase")
	void SetEventMode(bool bIn) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipPlayerPawnBase")
	void SetAccelerationEnable(bool bIn) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipPlayerPawnBase")
	void ResetOutsideMaxSpeed() {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipPlayerPawnBase")
	void RequestWarp(const FVector& vLocation, const FRotator& Rotation) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipPlayerPawnBase")
	void RequestStop(bool bIn) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipPlayerPawnBase")
	void RequestMaxSpeed() {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipPlayerPawnBase")
	void RequestForceStop(bool bIn) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipPlayerPawnBase")
	bool RemoteGumiShipPlayerStateEvent(const FName& EventName, class AActor* inActor) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipPlayerPawnBase")
	bool IsEventMode() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipPlayerPawnBase")
	bool IsAvoiding() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipPlayerPawnBase")
	ETresGumiShipPlayerMovementType GetPrevMovementType() { return ETresGumiShipPlayerMovementType::MT_DEFAULT_TYPE; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipPlayerPawnBase")
	ETresGumiShipPlayerMovementType GetMovementType() { return ETresGumiShipPlayerMovementType::MT_DEFAULT_TYPE; };

	/*void _UndoMovementCompo(bool bForce) {};
	void _SetCameraLagEnable(bool bLocation, bool bRotation) {};
	void _SetCameraControllEnable(bool bIn) {};
	void _SetAvoiding(bool bIn) {};
	void _RequestCameraReset(bool bImmediate) {};
	void _OnChnageSpeed(float fOldSeed, float fNewSpeed, float fRatio) {};
	void _ChangeMovementCompo(ETresGumiShipPlayerMovementType eType, bool bForce) {};
	void _ChangeAccelerationCompo(ETresGumiShipPlayerAccelerationType eType, bool bForce) {};*/
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGame.h"
#include "Engine/SQEX_ParticleAttachDataAsset.h"
#include "TresStateBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresStateBase : public UObject
{
	GENERATED_BODY()
public:
	/*State Name Reference*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	FName MyStateName;

	/*State ID Reference*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	TEnumAsByte<ETresStateID> MyStateID;

	/*Allows the state base to be recycled*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	bool m_bEnableRecycle;

	/*Character Pawn Base Reference*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	class ATresCharPawnBase* MyCharPawn;

	/*The Substep*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	int m_nSubStep;

	/*The Turn Index*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	int m_TurnIndex;

	/*The speed of the Turn to Target*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	float m_TurnToTargetSpeed;

	/*Allows you to Enable Change*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	bool m_bEnableChange;

	/*Allows you to Reverse Leg*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	bool m_bReverseLeg;

	/*Allows you to Enable Traction*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	bool m_bEnableTraction;

	/*Whether or not you can Turn to Target*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	bool m_bEnableTurnToTarget;

	/*Whether or not you can Face At*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	bool m_bFaceAt;

	/*Allows you to Enable Input*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	bool m_bEnableInput;

	/*Gets the Scene Manager of the State Base*/
	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class ATresSceneManager* GetTresSceneManager() { return nullptr; };

	/*Gets the Player Pawn Base of the State Base*/
	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class ATresPlayerPawnBase* GetTresPlayerPawnBase() { return nullptr; };

	/*Gets the Player Controller of the State Base*/
	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class ATresPlayerControllerBase* GetTresPlayerController() { return nullptr; };

	/*Gets the Pawn Base of the State Base*/
	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class ATresPawnBase* GetTresPawnBase() { return nullptr; };

	/*Gets the Character Pawn Base of the State Base*/
	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class ATresCharPawnBase* GetTresCharPawnBase() { return nullptr; };

	/*Gets the AI Controller of the State Base*/
	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class ATresAIController* GetTresAIController() { return nullptr; };

	/*Gets the State Name of the State Base*/
	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	FName GetStateName() { return FName::FName(); };

	/*Gets the State ID of the State Base*/
	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	TEnumAsByte<ETresStateID> GetStateID() { return ETresStateID::TSID_STATE_ACTION; };

	/*Gets the Pawn of the state base*/
	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class APawn* GetPawn() { return nullptr; };

	/*Gets the Authority Role of the Owner*/
	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	TEnumAsByte<ENetRole> GetOwnerRole() { return ENetRole::ROLE_Authority; };

	/*Gets the Remote Authority Role of the Owner*/
	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	TEnumAsByte<ENetRole> GetOwnerRemoteRole() { return ENetRole::ROLE_Authority; };

	/*Gets the Controller of the State Base*/
	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class AController* GetController() { return nullptr; };

	/*Gets the Actor of the State Base*/
	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class AActor* GetActor() { return nullptr; };

	/*Calls to Restart Again*/
	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void DoRestartAgain() {};

	/*Calls to Restart*/
	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void DoRestart() {};

	/*Calls to Finish*/
	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void DoFinish() {};

	/*Calls to Chain*/
	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void DoChain() {};

	/*Calls Again*/
	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void DoAgain() {};

	/*Sets the Attach Effect based on it's Group*/
	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void BP_SetEffectAttach(int InGroup) {};

	/*Sets the Effect based on it's Attach Name, Attach Data, and Group ID*/
	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void BP_SetEffect(const FName& InAttachName, class USQEX_ParticleAttachDataAsset* InAttachData, int InGroupID) {};

	/*Checks rether or not the animation has ended*/
	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	bool BP_IsAnimEnd(const FName& InSlotName) { return false; };

	/*Ends the effect based on it's Group ID and whether it's equal or not*/
	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void BP_EndEffect(int InGroupID, bool bEqual) {};

	/*Stops an animation based on it's slot name and can blend out using the Blend Out Time*/
	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void BP_AnimStop(const FName& InSlotName, float InBlendOutTime) {};

	/*Sets the Blend Space Param specified by the InSlotName*/
	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	bool BP_AnimSetBlendSpaceParam(const FName& InSlotName, float InX, float InY, float InZ) { return false; };

	/*Plays the Animation Sequence specified in the Parameters*/
	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	float BP_AnimPlaySequence(class UAnimSequenceBase* InAsset, const FName& InSlotName, float InBlendInTime, bool InLoop, int InEffectGroup, float InPlayRate, bool InRootTrans, bool InRootRot, const FVector2D& InRootTransScale) { return 0.0f; };

	/*Plays the Animation specified in the Parameters*/
	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	float BP_AnimPlay(const FName& InAnimName, float InBlendInTime, float InBlendOutTime, bool InLoop, bool InRootTrans, bool InRootRot, float InPlayRate) { return 0.0f; };

	/*Gets the Anim Use Slot Name based on the InIndex*/
	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	FName BP_AnimGetUseSlotName(int InIndex) { return FName::FName();; };
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGame.h"
#include "TresStateBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresStateBase : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	FName MyStateName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	TEnumAsByte<ETresStateID> MyStateID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	bool m_bEnableRecycle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	class ATresCharPawnBase* MyCharPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	int m_nSubStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	int m_TurnIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	float m_TurnToTargetSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	bool m_bEnableChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	bool m_bReverseLeg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	bool m_bEnableTraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	bool m_bEnableTurnToTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	bool m_bFaceAt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateBase")
	bool m_bEnableInput;

	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class ATresSceneManager* GetTresSceneManager() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class ATresPlayerPawnBase* GetTresPlayerPawnBase() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class ATresPlayerControllerBase* GetTresPlayerController() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class ATresPawnBase* GetTresPawnBase() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class ATresCharPawnBase* GetTresCharPawnBase() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class ATresAIController* GetTresAIController() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	FName GetStateName() { return FName::FName(); };

	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	TEnumAsByte<ETresStateID> GetStateID() { return ETresStateID::TSID_STATE_ACTION; };

	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class APawn* GetPawn() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	TEnumAsByte<ENetRole> GetOwnerRole() { return ENetRole::ROLE_Authority; };

	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	TEnumAsByte<ENetRole> GetOwnerRemoteRole() { return ENetRole::ROLE_Authority; };

	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class AController* GetController() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	class AActor* GetActor() { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void DoRestartAgain() {};

	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void DoRestart() {};

	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void DoFinish() {};

	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void DoChain() {};

	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void DoAgain() {};

	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void BP_SetEffectAttach(int InGroup) {};

	//UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	//void BP_SetEffect(const FName& InAttachName, class USQEX_ParticleAttachDataAsset* InAttachData, int InGroupID) {};

	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	bool BP_IsAnimEnd(const FName& InSlotName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void BP_EndEffect(int InGroupID, bool bEqual) {};

	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	void BP_AnimStop(const FName& InSlotName, float InBlendOutTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	bool BP_AnimSetBlendSpaceParam(const FName& InSlotName, float InX, float InY, float InZ) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	float BP_AnimPlaySequence(class UAnimSequenceBase* InAsset, const FName& InSlotName, float InBlendInTime, bool InLoop, int InEffectGroup, float InPlayRate, bool InRootTrans, bool InRootRot, const FVector2D& InRootTransScale) { return 0.0f; };

	UFUNCTION(BlueprintCallable, Category = "TresStateBase")
	float BP_AnimPlay(const FName& InAnimName, float InBlendInTime, float InBlendOutTime, bool InLoop, bool InRootTrans, bool InRootRot, float InPlayRate) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresStateBase")
	FName BP_AnimGetUseSlotName(int InIndex) { return FName::FName();; };
};

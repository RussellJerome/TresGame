// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresPlayerStart.h"
#include "TresSavePointActor.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresSavePointActor : public ATresPlayerStart
{
	GENERATED_BODY()
public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	//class UTresReactorComponent* MyReactor;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	//class UTresSavePointRecoverComponent* MyRecover;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	//class UTresMapMarkerComponent* MyMapMarker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	bool m_bAutoActivate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	bool m_bGimmickComponentAutoLinkActivate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	bool m_bIsActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	bool m_bIsAccessed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	bool m_bLimitedSavePoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	class UParticleSystem* m_BaseEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	class UParticleSystem* m_LimitBaseEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	class UParticleSystem* m_BodyEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	class UParticleSystem* m_LimitBodyEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	class UParticleSystem* m_HealEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	float m_ClipOutDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	class UParticleSystemComponent* m_pBaseEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	class UParticleSystemComponent* m_pBodyEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	class UParticleSystemComponent* m_pHealEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	class ATresCharPawnBase* m_pCheckPawn;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	//struct FScriptMulticastDelegate OnReactorDoCommand;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	//struct FScriptMulticastDelegate OnGimmickActivate;

	UFUNCTION(BlueprintCallable, Category = "TresSavePointActor")
	void ReceiveGimmickActivate(bool bEnable) {};

	/*UFUNCTION(BlueprintNativeEvent, Category = "TresSavePointActor")
	void OnChangeSavePointDispType(ETresSavePointDispType InDispType);
	void OnChangeSavePointDispType_Implementation(ETresSavePointDispType InDispType) {};*/

	UFUNCTION(BlueprintNativeEvent, Category = "TresSavePointActor")
	void OnChangePlayerArtsMode(bool bIsArtsMode);
	void OnChangePlayerArtsMode_Implementation(bool bIsArtsMode) {};

	UFUNCTION(BlueprintNativeEvent, Category = "TresSavePointActor")
	void OnChangeCinematicMode(bool bIsCinematicMode);
	void OnChangeCinematicMode_Implementation(bool bIsCinematicMode) {};

	UFUNCTION(BlueprintNativeEvent, Category = "TresSavePointActor")
	void OnChangeBattleMode(bool bIsBattleMode);
	void OnChangeBattleMode_Implementation(bool bIsBattleMode) {};

	UFUNCTION(BlueprintCallable, Category = "TresSavePointActor")
	void BP_SetDisableMode(bool bIsDisable) {};

	UFUNCTION(BlueprintPure, Category = "TresSavePointActor")
	bool BP_IsGimmickActive() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresSavePointActor")
	void BP_DeactivateGimmickComponentAll() {};

	UFUNCTION(BlueprintCallable, Category = "TresSavePointActor")
	void BP_DeactivateGimmick() {};

	UFUNCTION(BlueprintCallable, Category = "TresSavePointActor")
	void BP_ActivateGimmickComponentAll() {};

	UFUNCTION(BlueprintCallable, Category = "TresSavePointActor")
	void BP_ActivateGimmick() {};
};

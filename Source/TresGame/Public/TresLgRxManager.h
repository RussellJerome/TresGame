// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGame.h"
#include "TresLgRxManager.generated.h"

UCLASS()
class TRESGAME_API ATresLgRxManager : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	TArray<class UClass*> m_AssetsLgF;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	TArray<class UClass*> m_AssetsLgB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	TArray<class UClass*> m_AssetsRx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class UClass* m_AssetsCameraNormal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class UClass* m_AssetsProjGuardCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class UParticleSystem* m_AssetEffectGuardLoop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class UParticleSystem* m_AssetEffectAttackRelfect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class UParticleSystem* m_AssetEffectAttackSpark;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class UParticleSystem* m_AssetEffectLgHeavyEndOne;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class UParticleSystem* m_AssetEffectLgHeavyEndAll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class UParticleSystem* m_AssetEffectLgRing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class UParticleSystem* m_AssetEffectRushGuardHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class UParticleSystem* m_AssetEffectKeyHole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class UParticleSystem* m_AssetEffectBgLens;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class USoundBase* m_AssetVoiceMickey1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class USoundBase* m_AssetVoiceMickey2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	int m_Param_LgMaxHp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	float m_Param_GuardTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	float m_Param_GuardStun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	float m_Param_CmdPointGuardCounterAll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	float m_Param_CmdPointGuardCounterOne;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	float m_Param_RushStartActionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	int m_Param_FocusChrNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	float m_Param_GameClearGameSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	TArray<struct FTresLgRxReactionData> m_ReactData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	TArray<struct FTresLgRxPhaseData> m_PhaseData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class ATresPlayerControllerBase* m_PlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class ATresCameraNormal* m_Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	TArray<class ATresLgRxPawnBase*> m_PawnListLgF;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	TArray<class ATresLgRxPawnBase*> m_PawnListLgB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	TArray<class ATresLgRxPawnBase*> m_PawnListRx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class UParticleSystemComponent* m_pGuardEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class UParticleSystemComponent* m_pRushGuardHitEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class UParticleSystemComponent* m_pLgRingEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class UParticleSystemComponent* m_pKeyHoleEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	class AEmitterCameraLensEffectBase* m_pBgLensEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	TArray<class AActor*> m_CameraNoteList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLgRxManager")
	TArray<class ATresLgRxPawnBase*> m_ReactPawnListLg;

	UFUNCTION(BlueprintCallable, Category = "TresLgRxManager")
	void BP_SpawnLgRingEffect() {};

	UFUNCTION(BlueprintCallable, Category = "TresLgRxManager")
	void BP_SetFocusLgPawn(TEnumAsByte<ETresChrUniqueID> InChrUniqueID) {};

	UFUNCTION(BlueprintCallable, Category = "TresLgRxManager")
	void BP_SetFocusChangeEnd() {};

	UFUNCTION(BlueprintCallable, Category = "TresLgRxManager")
	void BP_SetEventEnd() {};

	UFUNCTION(BlueprintCallable, Category = "TresLgRxManager")
	void BP_SetAllVisible(bool InVisible) {};

	UFUNCTION(BlueprintCallable, Category = "TresLgRxManager")
	void BP_PrepareAppear() {};

	UFUNCTION(BlueprintCallable, Category = "TresLgRxManager")
	bool BP_PlayInterruptVoice(TEnumAsByte<ETresChrUniqueID> InChrUniqueID, class USoundBase* InVoiceAsset, const FName& InLipAnimName) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresLgRxManager")
	bool BP_IsPlayInterruptVoice(TEnumAsByte<ETresChrUniqueID> InChrUniqueID) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresLgRxManager")
	int BP_GetPhase() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresLgRxManager")
	class ATresCharPawnBase* BP_GetLgPawn(TEnumAsByte<ETresChrUniqueID> InChrUniqueID) { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresLgRxManager")
	TEnumAsByte<ETresChrUniqueID> BP_GetFocusLgChrUniqueID() { return ETresChrUniqueID::TRES_CHR_UID_AQUA; };

	UFUNCTION(BlueprintPure, Category = "TresLgRxManager")
	class AActor* BP_GetCameraNote(TEnumAsByte<ETresChrUniqueID> InChrUniqueID) { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresLgRxManager")
	bool BP_CanSpawnRushCamera() { return false; };
};

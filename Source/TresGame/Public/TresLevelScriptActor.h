// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "TresGame.h"
#include "TresLevelScriptActor.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresLevelScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelScriptActor")
	int VisibleExecNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelScriptActor")
	int VisibleCompleteFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelScriptActor")
	TEnumAsByte<ETresLevelVisibility> m_LevelVisibleType;

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void VanishLevelEntities(const FName& TargetGroup, TEnumAsByte<ETresLevelEntityDisappearMode> DisappearMode, bool SaveProperties) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void UnloadSelf() {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void TresSetPauseMenuType(TEnumAsByte<ETresPauseMenuType> Type) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void StartTutorial(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, class UTresMapSet* MapSet, const FName& TutorialName) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void SpawnLevelEntities(const FName& TargetGroup, int AppearInfoNo, bool IncrementAppearInfoNo, int UserDataNo, bool IncrementUserDataNo, class UObject* Spawner, bool DelaySpawning, bool SkipDrawAttractionFlowMarker) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	static void SetTresPackageShouldBeVisible(class UObject* WorldContextObject, const FName& PackageName, bool Visible, bool bOneFrameExecute) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void SetPreviousPlayableWorldCode(TEnumAsByte<ETresWorldCode> InWorldCode) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void SetLevelEntityUserDataNo(const FName& TargetGroup, int UserDataNo) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void SetLevelEntityAppearInfoNo(const FName& TargetGroup, int AppearInfoNo) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void SetEnableTickEnemyList(const FName& TargetGroup, bool bEnable, bool bAllComponents) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void SetEnableExistActorForMovie(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void SetAutoSaveControl(bool Enable, bool StorageAccess) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void ResetLevelEntities(const FName& TargetGroup) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void ReserveGarbageCollection(float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void ReceiveTresTakingPhotoFinish(TArray<FName> ShotTargetList, TArray<FName> MissedTargetList) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void ReceiveTresRideVehicle(class AActor* Actor) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void ReceiveTresPlayerTakeDamage(class ATresPlayerPawnBase* Pawn, int DamagePoint) {};

	//UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	//void ReceiveTresFriendTakeDamage(class ATresNpcPawnBase* Pawn, int DamagePoint) {};

	//UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	//void ReceiveTresEnemyKilled(class ATresEnemyPawnBase* Pawn, class ATresPawnBase* KillerPawn, TEnumAsByte<ETresCommandKind> CmdKind, const struct FTresDamageInfo& InDamageInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void RaiseWipeOutEventForGumi(class AActor* pTarget, ETresGumiShipEnemyID eEnemyID) {};

	//UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	//void RaiseWipeOutEvent(const FName& GroupName, class ATresEnemyPawnBase* Enemy, class ATresPawnBase* KilledBy) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void RaiseGenericEvent(const FName& EventName, class UObject* Invoker, class UObject* Target, int Param) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void PostphoneGarbageCollection(float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void PostEndTutorial() {};
	/*void OnWipeOutForGumi(class AActor* pTarget, ETresGumiShipEnemyID eEnemyID) {};
	void OnWipeOut(const FName& GroupName, class ATresEnemyPawnBase* Enemy, class ATresPawnBase* KilledBy) {};
	void OnQuitTutorial() {};
	void OnQuitMiniGame() {};
	void OnGenericEvent(const FName& EventName, class UObject* Invoker, class UObject* Target, int Param) {};
	void OnEventSkip() {};
	void OnCameraManagerInitialization() {};
	void OnCameraInitializationCompleted() {};*/

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void LoadAssets(const FName& AssetTag) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void LinkLevelEntityActorPosition(const FName& TargetGroup) {};

	UFUNCTION(BlueprintPure, Category = "TresLevelScriptActor")
	class AActor* GetEntityActor(const FName& EntityTag) { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresLevelScriptActor")
	void GetEnemyList(const FName& TargetGroup, TArray<class ATresPawnBase*>& outResult) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void ForceStopBattle(class ATresBattleVolume* BattleVolume) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void ForceGarbageCollection(bool bForcePurge) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void EndTutorial(const FName& EndEventName) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void DiscardRetryPoint() {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void CreateRetryPoint(class ATresPlayerStart* RetryPoint, bool WhiteFade) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void CreateCheckpoint(class AActor* RestartPoint) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void CreateAutoSaveDataEx(const FString& Map, const FString& Tag, TEnumAsByte<ETresWorldCode> WorldCode, const FName& MapName) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void CreateAutoSaveData(class ATresPlayerStart* PlayerStartPosition) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void ClearAssets(const FName& AssetTag) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelScriptActor")
	void CauseLevelEntityEvent(const FName& EventName) {};
};

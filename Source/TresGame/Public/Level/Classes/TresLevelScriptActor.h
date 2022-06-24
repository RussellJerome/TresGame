#pragma once
#include "CoreMinimal.h"
#include "ETresWorldCode.h"
#include "Engine/LevelScriptActor.h"
#include "ETresLevelVisibility.h"
#include "ETresLevelEntityDisappearMode.h"
#include "ETresPauseMenuType.h"
#include "Engine/LatentActionManager.h"
#include "ETresCommandKind.h"
#include "TresDamageInfo.h"
#include "ETresGumiShipEnemyID.h"
#include "TresLevelScriptActor.generated.h"

class UTresMapSet;
class UObject;
class AActor;
class ATresPlayerPawnBase;
class ATresNpcPawnBase;
class ATresEnemyPawnBase;
class ATresPawnBase;
class ATresBattleVolume;
class ATresPlayerStart;

UCLASS()
class TRESGAME_API ATresLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 VisibleExecNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 VisibleCompleteFrame;
    
private:
    UPROPERTY(EditDefaultsOnly)
    ETresLevelVisibility m_LevelVisibleType;
    
public:
    ATresLevelScriptActor();
    UFUNCTION(BlueprintCallable)
    void VanishLevelEntities(FName TargetGroup, TEnumAsByte<ETresLevelEntityDisappearMode> DisappearMode, bool SaveProperties);
    
    UFUNCTION(BlueprintCallable)
    void UnloadSelf();
    
    UFUNCTION(BlueprintCallable)
    void TresSetPauseMenuType(TEnumAsByte<ETresPauseMenuType> Type);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
    void StartTutorial(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UTresMapSet* MapSet, FName TutorialName);
    
    UFUNCTION(BlueprintCallable)
    void SpawnLevelEntities(FName TargetGroup, int32 AppearInfoNo, bool IncrementAppearInfoNo, int32 UserDataNo, bool IncrementUserDataNo, UObject* Spawner, bool DelaySpawning, bool SkipDrawAttractionFlowMarker);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
    static void SetTresPackageShouldBeVisible(UObject* WorldContextObject, FName PackageName, bool Visible, bool bOneFrameExecute);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviousPlayableWorldCode(TEnumAsByte<ETresWorldCode> InWorldCode);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelEntityUserDataNo(FName TargetGroup, int32 UserDataNo);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelEntityAppearInfoNo(FName TargetGroup, int32 AppearInfoNo);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableTickEnemyList(FName TargetGroup, bool bEnable, bool bAllComponents);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableExistActorForMovie(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSaveControl(bool Enable, bool StorageAccess);
    
    UFUNCTION(BlueprintCallable)
    void ResetLevelEntities(FName TargetGroup);
    
    UFUNCTION(BlueprintCallable)
    void ReserveGarbageCollection(float Time);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ReceiveTresTakingPhotoFinish(const TArray<FName>& ShotTargetList, const TArray<FName>& MissedTargetList);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ReceiveTresRideVehicle(AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ReceiveTresPlayerTakeDamage(ATresPlayerPawnBase* Pawn, int32 DamagePoint);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ReceiveTresFriendTakeDamage(ATresNpcPawnBase* Pawn, int32 DamagePoint);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ReceiveTresEnemyKilled(ATresEnemyPawnBase* Pawn, ATresPawnBase* KillerPawn, ETresCommandKind CmdKind, FTresDamageInfo InDamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void RaiseWipeOutEventForGumi(AActor* pTarget, const ETresGumiShipEnemyID eEnemyID);
    
    UFUNCTION(BlueprintCallable)
    void RaiseWipeOutEvent(FName GroupName, ATresEnemyPawnBase* Enemy, ATresPawnBase* KilledBy);
    
    UFUNCTION(BlueprintCallable)
    void RaiseGenericEvent(FName EventName, UObject* Invoker, UObject* Target, int32 Param);
    
    UFUNCTION(BlueprintCallable)
    void PostphoneGarbageCollection(float Time);
    
    UFUNCTION(BlueprintCallable)
    void PostEndTutorial();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnWipeOutForGumi(AActor* pTarget, const ETresGumiShipEnemyID eEnemyID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnWipeOut(FName GroupName, ATresEnemyPawnBase* Enemy, ATresPawnBase* KilledBy);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnQuitTutorial();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnQuitMiniGame();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnGenericEvent(FName EventName, UObject* Invoker, UObject* Target, int32 Param);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnEventSkip();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCameraManagerInitialization();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCameraInitializationCompleted();
    
    UFUNCTION(BlueprintCallable)
    void LoadAssets(FName AssetTag);
    
    UFUNCTION(BlueprintCallable)
    void LinkLevelEntityActorPosition(FName TargetGroup);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetEntityActor(FName EntityTag);
    
    UFUNCTION(BlueprintCallable)
    void GetEnemyList(TArray<ATresPawnBase*>& outResult, FName TargetGroup);
    
    UFUNCTION(BlueprintCallable)
    void ForceStopBattle(ATresBattleVolume* BattleVolume);
    
    UFUNCTION(BlueprintCallable)
    void ForceGarbageCollection(bool bForcePurge);
    
    UFUNCTION(BlueprintCallable)
    void EndTutorial(FName EndEventName);
    
    UFUNCTION(BlueprintCallable)
    void DiscardRetryPoint();
    
    UFUNCTION(BlueprintCallable)
    void CreateRetryPoint(ATresPlayerStart* RetryPoint, bool WhiteFade);
    
    UFUNCTION(BlueprintCallable)
    void CreateCheckpoint(AActor* RestartPoint);
    
    UFUNCTION(BlueprintCallable)
    void CreateAutoSaveDataEx(const FString& Map, const FString& Tag, TEnumAsByte<ETresWorldCode> WorldCode, FName MapName);
    
    UFUNCTION(BlueprintCallable)
    void CreateAutoSaveData(ATresPlayerStart* PlayerStartPosition);
    
    UFUNCTION(BlueprintCallable)
    void ClearAssets(FName AssetTag);
    
    UFUNCTION(BlueprintCallable)
    void CauseLevelEntityEvent(FName EventName);
    
};


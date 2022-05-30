#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresEnemyUniqueID.h"
#include "TresActorInterface.h"
#include "TresReactorComponentInterface.h"
#include "TresAnimInterface.h"
#include "UObject/NoExportTypes.h"
#include "TresNotifyInterface.h"
#include "TresGimmickKilledCharSignatureDelegate.h"
#include "TresGimmickTakeDamageSignatureDelegate.h"
#include "TresGimmickDoCommandSignatureDelegate.h"
#include "TresGimmickActivateSignatureDelegate.h"
#include "TresGimmickOnStartGimmickForPlanSignatureDelegate.h"
#include "TresGimmickOnStopGimmickForPlanSignatureDelegate.h"
#include "TresGimmickOnDestroyedGimmickForPlanSignatureDelegate.h"
#include "TresGimmickOnBeginPauseSpecialSignatureDelegate.h"
#include "TresGimmickOnEndPauseSpecialSignatureDelegate.h"
#include "TresGimmickOnGimmickInstanceInitializeSignatureDelegate.h"
#include "TresReactorDoCommandSignatureDelegate.h"
#include "TresGimmickOnBeginActorRideDelegate.h"
#include "ETresGimmickInstanceManagerInstanceState.h"
#include "TresGimmickOnEndActorRideDelegate.h"
#include "TresGimmickOnChangeActorRideBoneDelegate.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "TresDamageInfo.h"
#include "Engine/EngineTypes.h"
#include "ETresCommandKind.h"
#include "ETresGimmickDistanceBetweenPlayer.h"
#include "TresGimmickActor.generated.h"

class UTresChrBaseParam;
class ATresPawnBase;
class UTresChrDataTableSet;
class UParticleSystem;
class UObject;
class AController;
class UPrimitiveComponent;
class ATresGimmickActor;
class ATresCharPawnBase;
class UMeshComponent;

UCLASS(Abstract)
class ATresGimmickActor : public AActor, public ITresReactorComponentInterface, public ITresAnimInterface, public ITresNotifyInterface, public ITresActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bAutoActivate: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 m_bGimmickComponentAutoLinkActivate: 1;
    
    UPROPERTY()
    uint8 m_bIsActive: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bChangeAtkCollisionChannelWhenHidden: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bUseBlueprintEventByChangeAtkCollisionChannel: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTresChrDataTableSet* m_pDataTableSet;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresChrBaseParam* m_BaseParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETresEnemyUniqueID m_FakeEnemyUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_TeamNo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_UseChangeGimmickActionNotify;
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bEnableGimmickControl;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bAutoStartGimmick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bAutoStartShowGimmick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bDefaultShowGimmick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bWithoutMyMeshShowGimmick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bAutoStartEnableCollisionGimmick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bDefaultEnableCollisionGimmick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bWithoutMyMeshCollisionGimmick;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_DefaultCollisionGimmickProfile;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bAutoDestoryGimmick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_AutoDestoryDelayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bAutoDestoryHideGimmick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_AutoDestoryHideDelayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bAutoDestoryDisableCollisionGimmick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bEnableDestroyedReaction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bEnableDestroyedReflection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bAutoStartActiveGimmick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bBeginPlayDisableTickRegister;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bUseGimmickPause;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bUseGimmickPauseDisableTick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bUseGimmickInstanceManage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bAttackGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_Effect_GimmickDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_Effect_GimmickDestroyAttachPoint;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickTakeDamageSignature OnTresTakeDamage;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickDoCommandSignature OnGimmickDoCommand;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickActivateSignature OnGimmickActivate;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickOnStartGimmickForPlanSignature OnStartGimmickForPlan;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickOnStopGimmickForPlanSignature OnStopGimmickForPlan;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickOnDestroyedGimmickForPlanSignature OnDestroyedGimmickForPlan;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickOnBeginPauseSpecialSignature OnBeginPauseSpecialForPlan;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickOnEndPauseSpecialSignature OnEndPauseSpecialForPlan;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickOnGimmickInstanceInitializeSignature OnGimmickInstanceInitialize;
    
    UPROPERTY(BlueprintAssignable)
    FTresReactorDoCommandSignature OnReactorDoCommand;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickOnBeginActorRide OnGimmickBeginActorRide;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickOnEndActorRide OnGimmickEndActorRide;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickOnChangeActorRideBone OnGimmickChangeActorRideBone;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickKilledCharSignature OnGimmickKilledChar;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_FoodstuffKeyName;
    
public:
    ATresGimmickActor();
    UFUNCTION(BlueprintCallable)
    void SetPowerSavingMode(bool mode, UObject* who);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopGimmickForPlan(bool PlayAnimation);
    
    UFUNCTION(BlueprintCallable)
    void RequestStartGimmickForPlan(bool PlayAnimation);
    
    UFUNCTION(BlueprintCallable)
    void RequestShowGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestResetGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestHideGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestForceStopedGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestForceStartedGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestForceDestroyedGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestEnableCollisionGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestDisableCollisionGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestDestroyGimmickForPlan(bool PlayAnimation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ReceiveTresTakeDamage(float DamagePoint, AController* InstigatedBy, const FHitResult& HitInfo, const FTresDamageInfo& DamageInfo, FVector ShotFromDirection, AActor* DamageCauser);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveGimmickKilledCharSignature(ATresGimmickActor* AttackCauser, ATresPawnBase* KilledPawn, const FTresDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveGimmickEndActorRide(AActor* RideActor, UPrimitiveComponent* Component, const FName BoneName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ReceiveGimmickDoCommand(ATresCharPawnBase* InCommandCauser, ETresCommandKind InCommandID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveGimmickChangeActorRideBone(AActor* RideActor, UPrimitiveComponent* Component, const FName BoneName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveGimmickBeginActorRide(AActor* RideActor, UPrimitiveComponent* Component, const FName BoneName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveGimmickActivate(bool bEnable);
    
    UFUNCTION()
    void OnChangeGimmickPauseCallBack(bool bPause);
    
    UFUNCTION()
    void NotifyChangeGimmickActionImpl(bool bShow);
    
    UFUNCTION(BlueprintPure)
    bool IsPowerSavingMode();
    
    UFUNCTION(BlueprintPure)
    UMeshComponent* GetMeshComponentForPlan();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnStopGimmickForPlan(bool PlayAnimation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnStartGimmickForPlan(bool PlayAnimation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnShowGimmickForPlan();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnResetGimmickForPlan();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnHideGimmickForPlan();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnGimmickInstanceInitialize(ETresGimmickInstanceManagerInstanceState State, ETresGimmickInstanceManagerInstanceState OldState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnFlashGimmickForPlan();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnEndPauseSpecialForPlan();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnEnableCollisionGimmickForPlan();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnDisableCollisionGimmickForPlan();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnDestroyedGimmickForPlan(bool PlayAnimation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnBeginPauseSpecialForPlan();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_ChangePowerSavingMode(bool isSaving, UObject* who);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ChangeCollisionResponseToChannel(ECollisionChannel Channel, ECollisionResponse Response);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTeamNo(int32 InTeamNo);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetEnableFocusPointForPlan(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ManagedTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintPure)
    bool BP_IsStartGimmickForPlan() const;
    
    UFUNCTION(BlueprintPure)
    bool BP_IsShowedGimmickForPlan() const;
    
    UFUNCTION(BlueprintPure)
    bool BP_IsGimmickActive() const;
    
    UFUNCTION(BlueprintPure)
    bool BP_IsEnabledCollisionGimmickForPlan() const;
    
    UFUNCTION(BlueprintPure)
    bool BP_IsDestroyedGimmickForPlan() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_IgnoreActorWhenMovingAll(AActor* Actor, bool bShouldIgnore);
    
    UFUNCTION(BlueprintPure)
    int32 BP_GetTeamNo() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_GetFoodstuffPrizeToTeam();
    
    UFUNCTION(BlueprintPure)
    FName BP_GetFoodstuffDropDataKeyName() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableGimmickAttackCollision(const FName InGroupName, float InAttackInterval);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_DistanceBetweenPlayer(ETresGimmickDistanceBetweenPlayer Type);
    
    UFUNCTION(BlueprintCallable)
    void BP_DisableGimmickAttackCollision(const FName InGroupName);
    
    UFUNCTION(BlueprintCallable)
    void BP_DeactivateGimmickComponentAll();
    
    UFUNCTION(BlueprintCallable)
    void BP_DeactivateGimmick();
    
    UFUNCTION(BlueprintCallable)
    void BP_ActivateGimmickComponentAll();
    
    UFUNCTION(BlueprintCallable)
    void BP_ActivateGimmick();
    
    
    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresNotifyInterface.h"
#include "GameFramework/Pawn.h"
#include "TresAnimInterface.h"
#include "TresStateQueueInterface.h"
#include "TresActorInterface.h"
#include "ETresPlayerUniqueID.h"
#include "TresReactorComponentInterface.h"
#include "GameFramework/Character.h"
#include "ETresChrUniqueID.h"
#include "ESQEX_AI_ThinkType.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ETresEnemyUniqueID.h"
#include "TresPawnBase.generated.h"

class UTresBodyCollComponent;
class AActor;
class UTresRootComponent;
class UTresInterpGroupInst;
class UTresChrDataTableSet;
class UTresSoundAliasSet;
class UTresChrBaseParam;
class UObject;
class ATresLevelEntity;
class UTresInterpGroup;
class ATresCharPawnBase;
class ATresNpcPawnBase;

UCLASS(Abstract)
class TRESGAME_API ATresPawnBase : public APawn, public ITresAnimInterface, public ITresNotifyInterface, public ITresStateQueueInterface, public ITresReactorComponentInterface, public ITresActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
protected:
    UPROPERTY(DuplicateTransient, Export, Transient)
    TArray<UTresBodyCollComponent*> m_BodyComponentsList;
    
    UPROPERTY()
    FBasedMovementInfo BasedMovement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName MyLockOnSetBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName MyLookAtTargetBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTresChrDataTableSet* m_pDataTableSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTresSoundAliasSet* m_SoundAliasAsset;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresChrBaseParam* m_pBaseParam;
    
    UPROPERTY()
    int32 m_TeamNo;
    
public:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    TWeakObjectPtr<UObject> m_LevelEntitySpawner;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    ATresLevelEntity* m_LevelEntity;
    
    UPROPERTY(Transient)
    TArray<UTresInterpGroup*> m_InterpGroup;
    
    UPROPERTY(Transient)
    TArray<UTresInterpGroupInst*> m_InterpGroupInst;
    
    ATresPawnBase();
    UFUNCTION(BlueprintCallable)
    bool WarpToTaggedPlayerStart(FName InTag, bool bResetCamera, bool bStateClear);
    
    UFUNCTION(BlueprintCallable)
    bool WarpToActorLocation(const AActor* inActor, bool bResetCamera);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateRotateForDegree(FRotator InNewRot, float inDegree);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRotate(FRotator InNewRot, float InRotRate);
    
    UFUNCTION(BlueprintCallable)
    bool TurnToLocation(FVector InLocation, float InRotRate, bool inDegree);
    
    UFUNCTION(BlueprintCallable)
    bool TurnToActor(const AActor* inActor, float InRotRate, bool inDegree);
    
    UFUNCTION(BlueprintCallable)
    void SetRootAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnWalkingOffLedge(const FVector& PreviousFloorImpactNormal, const FVector& PreviousFloorContactNormal, const FVector& PreviousLocation, float TimeDelta);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void MeshUpdateRotate(FRotator InNewRot, float InRotRate);
    
    UFUNCTION(BlueprintCallable)
    void MeshResetRotate(float InRotRate);
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingRootMotion() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnableLockOn() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeSinceSpawn() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTeamNo() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSpawnLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetRotYaw() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRootUpVector() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRootRightVector() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRootFrontVector() const;
    
    UFUNCTION(BlueprintPure)
    float GetLocationZ() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetLevelEntitySpawner() const;
    
    UFUNCTION(BlueprintPure)
    ATresLevelEntity* GetLevelEntity() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetDirectionToLocation(FVector InLocation) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetDirectionTo(const AActor* inOtherActor) const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetBattleOwner() const;
    
    UFUNCTION(BlueprintCallable)
    void CollisionChangePawnHitResponse(bool bIsEnable, FName InGrpName);
    
    UFUNCTION(BlueprintCallable)
    void CollisionChangeMapHitResponse(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void CollisionChangeAttackHitResponse(bool bIsEnable, FName InGrpName);
    
    UFUNCTION(Client, Reliable, BlueprintCallable)
    void ClientCheatWalk();
    
    UFUNCTION(Client, Reliable, BlueprintCallable)
    void ClientCheatGhost();
    
    UFUNCTION(Client, Reliable, BlueprintCallable)
    void ClientCheatFly();
    
    UFUNCTION(BlueprintCallable)
    void BP_RootPauseUpdateOverlaps(bool bPause, bool bCallManualUpdateOnEndPause);
    
    UFUNCTION(BlueprintCallable)
    void BP_ReqFriendWarpHomeAll(bool bAdjustCameraBack);
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifyRegisterEnemyGaugeTarget(ATresCharPawnBase* InTarget);
    
    UFUNCTION(BlueprintPure)
    FVector BP_GetSelfMovedVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FVector BP_GetSelfMovedDelta() const;
    
    UFUNCTION(BlueprintPure)
    FVector BP_GetRootMotionVelocity() const;
    
    UFUNCTION(BlueprintPure)
    ETresPlayerUniqueID BP_GetPlayerUniqueID() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetNoActionCounter() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetMovedVelocityZ() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetMovedVelocityXYSize() const;
    
    UFUNCTION(BlueprintPure)
    FVector BP_GetMovedVelocity() const;
    
    UFUNCTION(BlueprintCallable)
    ATresNpcPawnBase* BP_GetFriendPawnByUniqueID(ETresChrUniqueID uid);
    
    UFUNCTION(BlueprintCallable)
    ATresNpcPawnBase* BP_GetFriendPawnByIndex(int32 Index);
    
    UFUNCTION(BlueprintPure)
    ESQEX_AI_ThinkType BP_GetFriendAIThinkType() const;
    
    UFUNCTION(BlueprintPure)
    ETresEnemyUniqueID BP_GetEnemyUniqueID() const;
    
    UFUNCTION(BlueprintPure)
    ETresChrUniqueID BP_GetChrUniqueID() const;
    
    UFUNCTION(BlueprintCallable)
    void AdjustRotate(float InRotRate);
    
    
    // Fix for true pure virtual functions not being implemented
};


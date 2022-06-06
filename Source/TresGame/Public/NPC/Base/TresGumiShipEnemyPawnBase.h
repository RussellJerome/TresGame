#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGumiShipCharaPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETresGumiShipEnemyLookAtType.h"
#include "ETresGumiShipEnemyStateResult.h"
#include "ETresGumiShipEnemyStateID.h"
#include "ETresGumiShipEnemyID.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemyPawnBase.generated.h"

class ATresGumiShipEnemyPawnBase;
class ATresGumiShipEnemyBattleStarter;
class USQEX_ParticleAttachDataAsset;
class UTresGumiShipEnemyGroupManager;
class UTresGumiShipBattleDataTableSet;
class UTresGumiShipEnemyStateController;
class AActor;
class ATresGumiShipEnemyPartsBase;
class ATresGumiShipEnemyGenerator;
class ATresGumiShipPlayerPawnBase;

UCLASS(Abstract)
class ATresGumiShipEnemyPawnBase : public ATresGumiShipCharaPawnBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyDisappearSignature, ATresGumiShipEnemyPawnBase*, pDisappearEnemy);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyDeadSignature, ATresGumiShipEnemyPawnBase*, pDeadEnemy);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyAppearSignature, ATresGumiShipEnemyPawnBase*, pAppearEnemy);
    
    UPROPERTY(BlueprintAssignable)
    FEnemyDeadSignature OnEnemyDead;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyAppearSignature OnEnemyAppearComplete;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyDisappearSignature OnEnemyDisappearComplete;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FName m_EnemyNameID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEnemyBoundsRadius;
    
    UPROPERTY(EditDefaultsOnly)
    UTresGumiShipBattleDataTableSet* m_pBattleDataTableSet;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_pEffectAttachDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nDeadEffectAttachGroupID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nUniqueDeadEffectAttachGroupID;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEncountSymbolWithAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_EncountSymbolStateMotionName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_GuideSymbolOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresGumiShipEnemyStateController> m_UseStateControllerClass;
    
public:
    ATresGumiShipEnemyPawnBase();
    UFUNCTION(BlueprintCallable)
    void TurnToTarget(const AActor* TargetActor, float LimitTurnDegrees, bool ApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    void TurnToLocation(const FVector& TargetLocation, float LimitTurnDegrees, bool ApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    void TurnToDesiredRotation(const FQuat& DesiredRotation, float LimitTurnDegrees, bool ApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StartAttackPermissionCheck();
    
    UFUNCTION(BlueprintCallable)
    void SetPitchLimitAngle(float PitchLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxRotateSpeed(float MaxRotateSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetLockOnPermissionAll(bool LockOnEnable, bool PropagateToAttachedParts);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyLookAtType(ETresGumiShipEnemyLookAtType LookAtType);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyLookAtOffset(FVector CameraBaseLookAtOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachEffectsVisibility(bool Visibility, bool PropagateToAttachedParts);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMeshVisibility(bool Visibility, bool PropagateToAttachedParts);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMeshFadeRate(float FadeRate, bool PropagateToAttachedParts);
    
    UFUNCTION(BlueprintPure)
    bool IsLockOnPermissionOK() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExistEnemyParts(FName PartsName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsDeadOrDisappear() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrowdEnemy() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBossEnemy() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAttackPermissionOK() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAttachedEnemyParts(ATresGumiShipEnemyPartsBase* pEnemyParts) const;
    
    UFUNCTION(BlueprintCallable)
    void HideEnemyPawn(bool HiddenEnable, bool PropagateToAttachedParts);
    
    UFUNCTION(BlueprintPure)
    ETresGumiShipEnemyStateResult GetStateResult() const;
    
    UFUNCTION(BlueprintPure)
    FName GetStateName(ETresGumiShipEnemyStateID StateID) const;
    
    UFUNCTION(BlueprintPure)
    UTresGumiShipEnemyStateController* GetStateController() const;
    
    UFUNCTION(BlueprintPure)
    ATresGumiShipEnemyGenerator* GetSpawnOwnerGenerator() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScorePoint() const;
    
    UFUNCTION(BlueprintPure)
    float GetPitchLimitAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxRotateSpeed() const;
    
    UFUNCTION(BlueprintPure)
    ETresGumiShipEnemyStateID GetLastStateID() const;
    
    UFUNCTION(BlueprintPure)
    ATresGumiShipPlayerPawnBase* GetGumiShipPlayerPawn() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetEnemyUnitID() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetEnemySymbolOffset() const;
    
    UFUNCTION(BlueprintPure)
    FName GetEnemyNameID() const;
    
    UFUNCTION(BlueprintPure)
    ETresGumiShipEnemyLookAtType GetEnemyLookAtType() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetEnemyLookAtOffset() const;
    
    UFUNCTION(BlueprintPure)
    ETresGumiShipEnemyID GetEnemyID() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetEnemyGUID() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnemyBoundsRadius() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetDirectActorRotator() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDirectActorLocation() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCurrentStateName() const;
    
    UFUNCTION(BlueprintPure)
    ETresGumiShipEnemyStateID GetCurrentStateID() const;
    
    UFUNCTION(BlueprintPure)
    ATresGumiShipEnemyBattleStarter* GetCurrentEnemyBattleStarter() const;
    
    UFUNCTION(BlueprintPure)
    UTresGumiShipBattleDataTableSet* GetBattleDataTableSet() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAttackPriority() const;
    
    UFUNCTION(BlueprintPure)
    ATresGumiShipEnemyPartsBase* GetAttachedEnemyParts(FName PartsName) const;
    
    UFUNCTION(BlueprintPure)
    UTresGumiShipEnemyGroupManager* GetAssignedEnemyGroupManager() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void _StartAttackCoolDownTimer(FName AttackName);
    
    UFUNCTION(BlueprintCallable)
    void _SetUsableAttackEnable(FName AttackName, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    bool _ReturnAttackPermission();
    
    UFUNCTION(BlueprintCallable)
    bool _RequestAttackPermission();
    
    UFUNCTION(BlueprintCallable)
    void _DeleteAttackMethodEntry(FName AttackName);
    
private:
    UFUNCTION(BlueprintCallable)
    bool _CreanupAttackPermission();
    
protected:
    UFUNCTION(BlueprintCallable)
    void _ChangeState(ETresGumiShipEnemyStateID StateID);
    
    UFUNCTION(BlueprintCallable)
    bool _CancelAttackPermissionRequest();
    
};


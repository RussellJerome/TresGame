// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGumiShipCharaPawnBase.h"
#include "TresGumiShipEnemyPawnBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGumiShipEnemyPawnBase : public ATresGumiShipCharaPawnBase
{
	GENERATED_BODY()
public:
	/*struct FScriptMulticastDelegate OnEnemyDead;
	struct FScriptMulticastDelegate OnEnemyAppearComplete;
	struct FScriptMulticastDelegate OnEnemyDisappearComplete;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipEnemyPawnBase")
	FName m_EnemyNameID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipEnemyPawnBase")
	float m_fEnemyBoundsRadius;

	//class UTresGumiShipBattleDataTableSet* m_pBattleDataTableSet;
	//class USQEX_ParticleAttachDataAsset* m_pEffectAttachDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipEnemyPawnBase")
	int m_nDeadEffectAttachGroupID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipEnemyPawnBase")
	int m_nUniqueDeadEffectAttachGroupID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipEnemyPawnBase")
	bool m_bEncountSymbolWithAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipEnemyPawnBase")
	FName m_EncountSymbolStateMotionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipEnemyPawnBase")
	FVector2D m_GuideSymbolOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipEnemyPawnBase")
	class UClass* m_UseStateControllerClass;

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void TurnToTarget(class AActor* TargetActor, float LimitTurnDegrees, bool ApplyImmediately) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void TurnToLocation(const FVector& TargetLocation, float LimitTurnDegrees, bool ApplyImmediately) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void TurnToDesiredRotation(const FQuat& DesiredRotation, float LimitTurnDegrees, bool ApplyImmediately) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void StartAttackPermissionCheck() {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void SetPitchLimitAngle(float PitchLimit) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void SetMaxRotateSpeed(float MaxRotateSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void SetLockOnPermissionAll(bool LockOnEnable, bool PropagateToAttachedParts) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void SetEnemyLookAtType(ETresGumiShipEnemyLookAtType LookAtType) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void SetEnemyLookAtOffset(const FVector& CameraBaseLookAtOffset) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void SetAttachEffectsVisibility(bool Visibility, bool PropagateToAttachedParts) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void SetAllMeshVisibility(bool Visibility, bool PropagateToAttachedParts) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void SetAllMeshFadeRate(float FadeRate, bool PropagateToAttachedParts) {};

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	bool IsLockOnPermissionOK() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	bool IsExistEnemyParts(const FName& PartsName) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	bool IsDeadOrDisappear() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	bool IsCrowdEnemy() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	bool IsBossEnemy() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	bool IsAttackPermissionOK() { return false; };

	//UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	//bool IsAttachedEnemyParts(class ATresGumiShipEnemyPartsBase* pEnemyParts) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void HideEnemyPawn(bool HiddenEnable, bool PropagateToAttachedParts) {};

	//ETresGumiShipEnemyStateResult GetStateResult();

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	FName GetStateName(ETresGumiShipEnemyStateID StateID) { return FName::FName(); };

	//UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	//class UTresGumiShipEnemyStateController* GetStateController() { return nullptr; };

	//UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	//class ATresGumiShipEnemyGenerator* GetSpawnOwnerGenerator() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	int GetScorePoint() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	float GetPitchLimitAngle() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	float GetMaxRotateSpeed() { return 0.0f; };

	//ETresGumiShipEnemyStateID GetLastStateID();

	//UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	//class ATresGumiShipPlayerPawnBase* GetGumiShipPlayerPawn() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	int GetEnemyUnitID() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	FVector2D GetEnemySymbolOffset() { return FVector2D::FVector2D(); };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	FName GetEnemyNameID() { return FName::FName(); };

	//ETresGumiShipEnemyLookAtType GetEnemyLookAtType();

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	FVector GetEnemyLookAtOffset() { return FVector::FVector(); };

	//ETresGumiShipEnemyID GetEnemyID();

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	FGuid GetEnemyGUID() { return FGuid::FGuid(); };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	float GetEnemyBoundsRadius() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	FRotator GetDirectActorRotator() { return FRotator::FRotator(); };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	FVector GetDirectActorLocation() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	FName GetCurrentStateName() { return FName::FName(); };

	//ETresGumiShipEnemyStateID GetCurrentStateID();

	//UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	//class ATresGumiShipEnemyBattleStarter* GetCurrentEnemyBattleStarter() { return nullptr; };

	//UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	//class UTresGumiShipBattleDataTableSet* GetBattleDataTableSet() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	int GetAttackPriority() { return 0; };

	//UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	//class ATresGumiShipEnemyPartsBase* GetAttachedEnemyParts(const FName& PartsName) { return nullptr; };

	//UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	//class UTresGumiShipEnemyGroupManager* GetAssignedEnemyGroupManager() { return nullptr; };

	//void EnemyDisappearSignature__DelegateSignature(class ATresGumiShipEnemyPawnBase* pDisappearEnemy);
	//void EnemyDeadSignature__DelegateSignature(class ATresGumiShipEnemyPawnBase* pDeadEnemy);
	//void EnemyAppearSignature__DelegateSignature(class ATresGumiShipEnemyPawnBase* pAppearEnemy);

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void _StartAttackCoolDownTimer(const FName& AttackName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void _SetUsableAttackEnable(const FName& AttackName, bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	bool _ReturnAttackPermission() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	bool _RequestAttackPermission() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void _DeleteAttackMethodEntry(const FName& AttackName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	bool _CreanupAttackPermission() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	void _ChangeState(ETresGumiShipEnemyStateID StateID) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipEnemyPawnBase")
	bool _CancelAttackPermissionRequest() { return false; };
};

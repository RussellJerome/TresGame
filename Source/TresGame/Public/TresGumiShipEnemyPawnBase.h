// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGumiShipCharaPawnBase.h"
#include "TresGumiShipEnemyPawnBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyDisappearSignature, class ATresGumiShipEnemyPawnBase*, pDisappearEnemy);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyDeadSignature, class ATresGumiShipEnemyPawnBase*, pDeadEnemy);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyAppearSignature, class ATresGumiShipEnemyPawnBase*, pAppearEnemy);

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGumiShipEnemyPawnBase : public ATresGumiShipCharaPawnBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable, Category = "TresBodyCollPrimitive")
	FEnemyDeadSignature OnEnemyDead;
	
	UPROPERTY(BlueprintAssignable, Category = "TresBodyCollPrimitive")
	FEnemyAppearSignature OnEnemyAppearComplete;
	
	UPROPERTY(BlueprintAssignable, Category = "TresBodyCollPrimitive")
	FEnemyDisappearSignature OnEnemyDisappearComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipEnemyPawnBase")
	FName m_EnemyNameID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipEnemyPawnBase")
	float m_fEnemyBoundsRadius;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipEnemyPawnBase")
	//class UTresGumiShipBattleDataTableSet* m_pBattleDataTableSet;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipEnemyPawnBase")
	class USQEX_ParticleAttachDataAsset* m_pEffectAttachDataAsset;

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

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	ETresGumiShipEnemyStateResult GetStateResult() { return ETresGumiShipEnemyStateResult::RESULT_ABORT; };

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

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	ETresGumiShipEnemyStateID GetLastStateID() { return ETresGumiShipEnemyStateID::BLANK_STATE; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	class ATresGumiShipPlayerPawnBase* GetGumiShipPlayerPawn() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	int GetEnemyUnitID() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	FVector2D GetEnemySymbolOffset() { return FVector2D::FVector2D(); };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	FName GetEnemyNameID() { return FName::FName(); };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	ETresGumiShipEnemyLookAtType GetEnemyLookAtType() { return ETresGumiShipEnemyLookAtType::KEEP_SPLINE_MOVE_DIRECTION;};

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	FVector GetEnemyLookAtOffset() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	ETresGumiShipEnemyID GetEnemyID() { return ETresGumiShipEnemyID::ENEMY_ID_NONE;};

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

	UFUNCTION(BlueprintPure, Category = "TresGumiShipEnemyPawnBase")
	ETresGumiShipEnemyStateID GetCurrentStateID() { return ETresGumiShipEnemyStateID::ACTION1_STATE;};

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

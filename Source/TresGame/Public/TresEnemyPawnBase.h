// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresAIPawnBase.h"
#include "TresEnemyPawnBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresEnemyPawnBase : public ATresAIPawnBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	class ATresEnemyPawnBase* EnemyParent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	TArray<class ATresEnemyPawnBase*> EnemyChildren;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	TEnumAsByte<ETresEnemyUniqueID> m_EnemyUniqueID;

	//ESQEX_FreeFlowKind m_FreeFlowKind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	int m_AppearEffectGroupID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	int m_DieEffectGroupID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	TArray<float> m_IdlingBreakWeights;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	class UClass* m_EnemyCommonParam;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	//TArray<struct FRevengeAttacks> m_RevengeAttacks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	TArray<class UClass*> m_SpawnEnemyClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	bool m_bEnableDieBodyPush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	TEnumAsByte<ETresEnemyMajorUseID> m_eMajorUseID;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	//TArray<struct FTresEnemyRetryVoiceData> m_RetryVoiceDataList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	class USoundBase* m_PlayerKilledVoiceData;
	//class USQEXSEADSoundReferenceEnumSet* m_SoundAssets_Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	bool m_bStuckCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	bool m_bFallenAbyssCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	bool m_bRePopForStuckAndFallenAbyssCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	bool m_bWaterEnemy;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	//class UTresAIWeaponComponent* m_AIWeaponComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	class UParticleSystemComponent* m_SwirlUpEff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	float m_YoBindMeshScaleRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyPawnBase")
	float m_WallHitIgnorePhysicsObjectMass;

	UFUNCTION(BlueprintCallable, Category = "TresEnemyPawnBase")
	void SetStuckCheck(bool bEnable) {};

	UFUNCTION(BlueprintPure, Category = "TresEnemyPawnBase")
	bool IsWeaponAttacking() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresEnemyPawnBase")
	bool IsTargetPlayer() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresEnemyPawnBase")
	bool IsTargetGigas() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresEnemyPawnBase")
	bool IsRevengeAttack() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresEnemyPawnBase")
	bool IsIdle() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresEnemyPawnBase")
	bool IsCoopMode() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresEnemyPawnBase")
	float GetUserParam(int ParamIndex) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresEnemyPawnBase")
	class UObject* GetUserData() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresEnemyPawnBase")
	ETresEnemyUniqueID GetEnemyUniqueID() { return ETresEnemyUniqueID::TRES_ENEMY_UID_BX059; };

	UFUNCTION(BlueprintPure, Category = "TresEnemyPawnBase")
	float GetAppearWait() { return 0.0f; };
};

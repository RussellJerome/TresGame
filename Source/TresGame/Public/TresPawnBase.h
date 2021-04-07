// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TresBodyCollComponent.h"
#include "GameFramework/Character.h"
#include "TresPawnBase.generated.h"

UCLASS()
class TRESGAME_API ATresPawnBase : public APawn
{
	GENERATED_BODY()

public:
	ATresPawnBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPawnBase")
	class UTresRootComponent* MyRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPawnBase")
	TArray<UTresBodyCollComponent*> m_BodyComponentsList;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPawnBase")
	struct FBasedMovementInfo BasedMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPawnBase")
	FName MyLockOnSetBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPawnBase")
	FName MyLookAtTargetBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPawnBase")
	class UTresChrDataTableSet* m_pDataTableSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPawnBase")
	class UTresSoundAliasSet* m_SoundAliasAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPawnBase")
	class UTresChrBaseParam* m_pBaseParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPawnBase")
	int m_TeamNo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPawnBase")
	TWeakObjectPtr<UObject> m_LevelEntitySpawner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPawnBase")
	class ATresLevelEntity* m_LevelEntity;
	//TODO
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPawnBase")
//	TArray<class UTresInterpGroup*> m_InterpGroup;
	//TODO
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPawnBase")
//	TArray<class UTresInterpGroupInst*> m_InterpGroupInst;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION(BlueprintCallable, Category = "TresPawnBase")
	bool WarpToTaggedPlayerStart(const FName& InTag, bool bResetCamera, bool bStateClear) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresPawnBase")
	bool WarpToActorLocation(class AActor* inActor, bool bResetCamera) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresPawnBase")
	bool UpdateRotateForDegree(const struct FRotator& InNewRot, float inDegree) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresPawnBase")
	void UpdateRotate(const struct FRotator& InNewRot, float InRotRate) {};

	UFUNCTION(BlueprintCallable, Category = "TresPawnBase")
	bool TurnToLocation(const struct FVector& InLocation, float InRotRate, bool inDegree) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresPawnBase")
	bool TurnToActor(class AActor* inActor, float InRotRate, bool inDegree) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresPawnBase")
	void SetRootAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale) {};

	//void OnWalkingOffLedge(const struct FVector& PreviousFloorImpactNormal, const struct FVector& PreviousFloorContactNormal, const struct FVector& PreviousLocation, float TimeDelta);
	//void OnLanded(const struct FHitResult& Hit);
	
	UFUNCTION(BlueprintCallable, Category = "TresPawnBase")
	void MeshUpdateRotate(const struct FRotator& InNewRot, float InRotRate) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresPawnBase")
	void MeshResetRotate(float InRotRate) {};
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	bool IsPlayingRootMotion() { return false; };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	bool IsEnableLockOn() { return false; };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	float GetTimeSinceSpawn() { return 0.0f; };

	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	int GetTeamNo() { return 0; };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	FVector GetSpawnLocation() { return FVector::FVector(); };

	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	float GetRotYaw() { return 0.0f; };

	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	FVector GetRootUpVector() { return FVector::FVector(); };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	FVector GetRootRightVector() { return FVector::FVector(); };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	FVector GetRootFrontVector() { return FVector::FVector(); };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	float GetLocationZ() { return 0.0f; };

	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	UObject* GetLevelEntitySpawner() { return nullptr; };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
		class ATresLevelEntity* GetLevelEntity() { return nullptr; };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	FRotator GetDirectionToLocation(const FVector& InLocation) { return FRotator::FRotator(); };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	FRotator GetDirectionTo(class AActor* inOtherActor) { return FRotator::FRotator(); };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	UObject* GetBattleOwner() { return nullptr; };
	
	//TODO
	//void CollisionChangePawnHitResponse(bool bIsEnable, const struct FName& InGrpName);
	//void CollisionChangeMapHitResponse(bool bIsEnable);
	//void CollisionChangeAttackHitResponse(bool bIsEnable, const struct FName& InGrpName);
	
	UFUNCTION(BlueprintCallable, Category = "TresPawnBase")
	void ClientCheatWalk() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresPawnBase")
	void ClientCheatGhost() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresPawnBase")
	void ClientCheatFly() {};

	//void BP_RootPauseUpdateOverlaps(bool bPause, bool bCallManualUpdateOnEndPause);
	//void BP_ReqFriendWarpHomeAll(bool bAdjustCameraBack);
	//void BP_NotifyRegisterEnemyGaugeTarget(class ATresCharPawnBase* InTarget);

	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	FVector BP_GetSelfMovedVelocity() { return FVector::FVector(); };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	FVector BP_GetSelfMovedDelta() { return FVector::FVector(); };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	FVector BP_GetRootMotionVelocity() { return FVector::FVector(); };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	ETresPlayerUniqueID BP_GetPlayerUniqueID() { return ETresPlayerUniqueID::ETresPlayerUniqueID_MAX; };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	float BP_GetNoActionCounter() { return 0.0f; };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	float BP_GetMovedVelocityZ() { return 0.0f; };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	float BP_GetMovedVelocityXYSize() { return 0.0f; };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	FVector BP_GetMovedVelocity() { return FVector::FVector(); };
	
	//TODO
	//class ATresNpcPawnBase* BP_GetFriendPawnByUniqueID(ETresChrUniqueID uid);
	
	//TODO
	//class ATresNpcPawnBase* BP_GetFriendPawnByIndex(int Index);
	
	//TODO ENGINE IMPLEMENTATION REQUIRED
	//ESQEX_AI_ThinkType BP_GetFriendAIThinkType();
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	ETresEnemyUniqueID BP_GetEnemyUniqueID() { return ETresEnemyUniqueID::TRES_ENEMY_UID_BX059; };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
	ETresChrUniqueID BP_GetChrUniqueID() { return ETresChrUniqueID::TRES_CHR_UID_AQUA; };

	UFUNCTION(BlueprintCallable, Category = "TresPawnBase")
	void AdjustRotate(float InRotRate) {};
};

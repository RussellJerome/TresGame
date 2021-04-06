// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TresPawnBase.generated.h"

UCLASS()
class TRESGAME_API ATresPawnBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATresPawnBase();

	
	class UTresRootComponent*                          MyRoot;                                                   // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<UTresBodyCollComponent*>              m_BodyComponentsList;                                     // 0x0470(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	struct FBasedMovementInfo                          BasedMovement;                                            // 0x0480(0x0030)
	struct FName                                       MyLockOnSetBoneName;                                      // 0x04B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MyLookAtTargetBoneName;                                   // 0x04B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTresChrDataTableSet*                        m_pDataTableSet;                                          // 0x04C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTresSoundAliasSet*                          m_SoundAliasAsset;                                        // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTresChrBaseParam*                           m_pBaseParam;                                             // 0x04D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	int                                                m_TeamNo;                                                 // 0x0514(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      m_LevelEntitySpawner;                                     // 0x0530(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class ATresLevelEntity*                            m_LevelEntity;                                            // 0x0538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	TArray<class UTresInterpGroup*>                    m_InterpGroup;                                            // 0x0548(0x0010) (ZeroConstructor, Transient)
	TArray<class UTresInterpGroupInst*>                m_InterpGroupInst;                                        // 0x0558(0x0010) (ZeroConstructor, Transient)

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
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
	
	//class ATresLevelEntity* GetLevelEntity();
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
		FRotator GetDirectionToLocation(const FVector& InLocation) { return FRotator::FRotator(); };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
		FRotator GetDirectionTo(class AActor* inOtherActor) { return FRotator::FRotator(); };
	
	UFUNCTION(Blueprintpure, Category = "TresPawnBase")
		UObject* GetBattleOwner() { return nullptr; };
	
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
	//struct FVector BP_GetSelfMovedVelocity();
	//struct FVector BP_GetSelfMovedDelta();
	//struct FVector BP_GetRootMotionVelocity();
	//ETresPlayerUniqueID BP_GetPlayerUniqueID();
	//float BP_GetNoActionCounter();
	//float BP_GetMovedVelocityZ();
	//float BP_GetMovedVelocityXYSize();
	//struct FVector BP_GetMovedVelocity();
	//class ATresNpcPawnBase* BP_GetFriendPawnByUniqueID(ETresChrUniqueID uid);
	//class ATresNpcPawnBase* BP_GetFriendPawnByIndex(int Index);
	//ESQEX_AI_ThinkType BP_GetFriendAIThinkType();
	//ETresEnemyUniqueID BP_GetEnemyUniqueID();
	//ETresChrUniqueID BP_GetChrUniqueID();
	//void AdjustRotate(float InRotRate);
	//
};

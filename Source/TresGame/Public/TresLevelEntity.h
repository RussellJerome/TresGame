// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGame_StructsAndEnums.h"
#include "TresLevelEntity.generated.h"

UCLASS()
class TRESGAME_API ATresLevelEntity : public AActor
{
	GENERATED_BODY()
	
public:	
	ATresLevelEntity();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	bool m_ForceLazyLoad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	class USceneComponent* TransformComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	FGuid m_GUID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	int m_MaxSpawnCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	FName m_EntityTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	FStringAssetReference m_ActorClassPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	TEnumAsByte<ETresCommandKind> m_AttractionFlowMarkerCommand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	TArray<FName> m_GroupNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	bool m_LazyLoad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	bool m_DontSpawnIfColliding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	int m_CurrentAppearInfoNo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	struct FTresLevelEntityAppearInfo m_CurrentAppearInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	class UObject* m_Spawner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	FVector m_SpawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	FRotator m_SpawnRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	float m_SpawnWait;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	float m_AppearWait;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	bool m_AppearVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	int m_AppearCoopNo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	int m_AppearInfoNo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	TArray<struct FTresLevelEntityAppearInfo> m_AppearInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	int m_CurrentUserDataNo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	struct FTresLevelEntityUserData m_CurrentUserData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	int m_UserDataNo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	TArray<struct FTresLevelEntityUserData> m_UserData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	class UTresLevelEntityActorData* m_ActorData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	class UClass* m_ActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	class AActor* m_EntityActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	class ATresAIPawnBase* m_VanishingActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	TArray<class UTresLevelEntityGroup*> m_Groups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	class UTresLevelEntityManager* m_Manager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	bool m_Suspend;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	int m_SpawnCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	int m_KillCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	bool m_PendingLoadActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	bool m_ActorClassLoading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	bool m_LoadActorClassCompleteThenSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	bool m_CancelActorClassLoading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	TArray<int> m_DataBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntity")
	bool m_AutoDestroy;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "TresLevelEntity")
	void LinkActorPosition() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresLevelEntity")
	class AActor* GetActor() { return nullptr; };
	
	UFUNCTION(BlueprintCallable, Category = "TresLevelEntity")
	void DestroyActor() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresLevelEntity")
	void DestorySelfWithActor() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresLevelEntity")
	void DestorySelf() {};
};

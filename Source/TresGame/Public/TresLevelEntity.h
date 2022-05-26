#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresLevelEntityAppearInfo.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "ETresCommandKind.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "UObject/NoExportTypes.h"
#include "TresLevelEntityUserData.h"
#include "UObject/NoExportTypes.h"
#include "TresLevelEntity.generated.h"

class USceneComponent;
class UObject;
class UTresLevelEntityActorData;
class ATresAIPawnBase;
class UTresLevelEntityGroup;
class UTresLevelEntityManager;

UCLASS()
class TRESGAME_API ATresLevelEntity : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    bool m_ForceLazyLoad;
    
    UPROPERTY(Export)
    USceneComponent* TransformComponent;
    
    UPROPERTY(VisibleAnywhere)
    FGuid m_GUID;
    
    UPROPERTY(EditAnywhere)
    int32 m_MaxSpawnCount;
    
    UPROPERTY(EditAnywhere)
    FName m_EntityTag;
    
    UPROPERTY(VisibleAnywhere)
    FStringAssetReference m_ActorClassPath;
    
    UPROPERTY(Transient)
    TEnumAsByte<ETresCommandKind> m_AttractionFlowMarkerCommand;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_GroupNames;
    
    UPROPERTY(EditAnywhere)
    bool m_LazyLoad;
    
    UPROPERTY(EditAnywhere)
    bool m_DontSpawnIfColliding;
    
    UPROPERTY(Transient)
    int32 m_CurrentAppearInfoNo;
    
    UPROPERTY(Transient)
    FTresLevelEntityAppearInfo m_CurrentAppearInfo;
    
    UPROPERTY(Transient)
    UObject* m_Spawner;
    
    UPROPERTY(Transient)
    FVector m_SpawnLocation;
    
    UPROPERTY(Transient)
    FRotator m_SpawnRotation;
    
    UPROPERTY(Transient)
    float m_SpawnWait;
    
    UPROPERTY(Transient)
    float m_AppearWait;
    
    UPROPERTY(Transient)
    bool m_AppearVisible;
    
    UPROPERTY(Transient)
    int32 m_AppearCoopNo;
    
    UPROPERTY(EditAnywhere)
    int32 m_AppearInfoNo;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresLevelEntityAppearInfo> m_AppearInfo;
    
    UPROPERTY(Transient)
    int32 m_CurrentUserDataNo;
    
    UPROPERTY(Transient)
    FTresLevelEntityUserData m_CurrentUserData;
    
    UPROPERTY(EditAnywhere)
    int32 m_UserDataNo;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresLevelEntityUserData> m_UserData;
    
    UPROPERTY(EditAnywhere, Instanced)
    UTresLevelEntityActorData* m_ActorData;
    
    UPROPERTY(Transient)
    TSubclassOf<AActor> m_ActorClass;
    
    UPROPERTY(Transient, VisibleAnywhere)
    AActor* m_EntityActor;
    
    UPROPERTY(Transient)
    ATresAIPawnBase* m_VanishingActor;
    
    UPROPERTY(Transient)
    TArray<UTresLevelEntityGroup*> m_Groups;
    
    UPROPERTY(Transient)
    UTresLevelEntityManager* m_Manager;
    
    UPROPERTY(Transient)
    bool m_Suspend;
    
    UPROPERTY(Transient)
    int32 m_SpawnCount;
    
    UPROPERTY(Transient)
    int32 m_KillCount;
    
    UPROPERTY(Transient)
    bool m_PendingLoadActorClass;
    
    UPROPERTY(Transient)
    bool m_ActorClassLoading;
    
    UPROPERTY(Transient)
    bool m_LoadActorClassCompleteThenSpawn;
    
    UPROPERTY(Transient)
    bool m_CancelActorClassLoading;
    
    UPROPERTY(SaveGame, Transient)
    TArray<uint8> m_DataBuffer;
    
    UPROPERTY(Transient)
    bool m_AutoDestroy;
    
public:
    ATresLevelEntity();
    UFUNCTION(BlueprintCallable)
    void LinkActorPosition();
    
    UFUNCTION(BlueprintPure)
    AActor* GetActor() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyActor();
    
    UFUNCTION(BlueprintCallable)
    void DestorySelfWithActor();
    
    UFUNCTION(BlueprintCallable)
    void DestorySelf();
    
};


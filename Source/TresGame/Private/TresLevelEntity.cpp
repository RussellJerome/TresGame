#include "TresLevelEntity.h"
#include "Components/SceneComponent.h"

class AActor;

void ATresLevelEntity::LinkActorPosition() {
}

AActor* ATresLevelEntity::GetActor() const {
    return NULL;
}

void ATresLevelEntity::DestroyActor() {
}

void ATresLevelEntity::DestorySelfWithActor() {
}

void ATresLevelEntity::DestorySelf() {
}

ATresLevelEntity::ATresLevelEntity() {
    this->m_ForceLazyLoad = false;
    this->TransformComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent0"));
    this->m_MaxSpawnCount = 1;
    this->m_AttractionFlowMarkerCommand = TRES_CMD_KIND_NONE;
    this->m_LazyLoad = false;
    this->m_DontSpawnIfColliding = false;
    this->m_CurrentAppearInfoNo = 0;
    this->m_Spawner = NULL;
    this->m_SpawnWait = 0.00f;
    this->m_AppearWait = 0.00f;
    this->m_AppearVisible = false;
    this->m_AppearCoopNo = 0;
    this->m_AppearInfoNo = -1;
    this->m_CurrentUserDataNo = 0;
    this->m_UserDataNo = -1;
    this->m_ActorData = NULL;
    this->m_ActorClass = NULL;
    this->m_EntityActor = NULL;
    this->m_VanishingActor = NULL;
    this->m_Manager = NULL;
    this->m_Suspend = false;
    this->m_SpawnCount = 0;
    this->m_KillCount = 0;
    this->m_PendingLoadActorClass = false;
    this->m_ActorClassLoading = false;
    this->m_LoadActorClassCompleteThenSpawn = false;
    this->m_CancelActorClassLoading = false;
    this->m_AutoDestroy = false;
}


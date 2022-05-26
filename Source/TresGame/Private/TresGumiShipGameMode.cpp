#include "TresGumiShipGameMode.h"
#include "TresGumiShipAtkCollisionMgr.h"
#include "TresGumiShipGumiMissionManager.h"
#include "TresGameTimerManagerComponent.h"
#include "TresGumiShipBodyCollisionMgr.h"
#include "TresGumiShipDefCollisionMgr.h"
#include "TresGumiShipWeaponManager.h"
#include "TresGumiShipProjectileFactory.h"
#include "TresGumiShipLockonPrimitiveManager.h"
#include "TresDistanceCalculateManagerComponent.h"
#include "TresGumiShipGlobalEnemyManager.h"
#include "TresGumiShipMissionMgr.h"
#include "TresGumiShipRaderEntityManager.h"

class ATresWorldMapCameraActor;
class ATresGummiMenuManager;
class ATresGumiShipBattleVolume;
class ATresGumiShipPrizeItem;
class ATresGumiShipEnemyBattleStarter;

void ATresGumiShipGameMode::RefleshGuideMarkerArea() {
}

ATresWorldMapCameraActor* ATresGumiShipGameMode::GetWorldMapCameraActor() const {
    return NULL;
}

ATresGummiMenuManager* ATresGumiShipGameMode::GetGummiMenuManager() const {
    return NULL;
}

UTresGumiShipGumiMissionManager* ATresGumiShipGameMode::GetGumiMissionMgr() const {
    return NULL;
}

ATresGumiShipPrizeItem* ATresGumiShipGameMode::GetGlobalPrizeManager() const {
    return NULL;
}

ATresGumiShipEnemyBattleStarter* ATresGumiShipGameMode::GetCurrentEnemyBattleStarter() const {
    return NULL;
}

ATresGumiShipBattleVolume* ATresGumiShipGameMode::GetActiveBattleVolume() const {
    return NULL;
}

void ATresGumiShipGameMode::_OnOverlapedGuideVolume() {
}

ATresGumiShipGameMode::ATresGumiShipGameMode() {
    this->m_pFieldBGM = NULL;
    this->m_pNormalBattleBGM = NULL;
    this->m_pBossBattleBGM = NULL;
    this->m_pBattleResultBGM = NULL;
    this->m_pEditorDataSet = NULL;
    this->DamageMaterialIntensityParameter = 0.00f;
    this->DamageMaterialBlinkSpeedParameter = 0.00f;
    this->DamageMaterialApplyTime = 0.00f;
    this->GummiMenuManagerRef = NULL;
    this->WorldMapCameraActorRef = NULL;
    this->m_GameOverPawn = NULL;
    this->m_pAtkCollisionMgr = CreateDefaultSubobject<UTresGumiShipAtkCollisionMgr>(TEXT("AtkCollMgr"));
    this->m_pBodyCollisionMgr = CreateDefaultSubobject<UTresGumiShipBodyCollisionMgr>(TEXT("BodyCollMgr"));
    this->m_pDefCollisionMgr = CreateDefaultSubobject<UTresGumiShipDefCollisionMgr>(TEXT("DefCollMgr"));
    this->m_pWeaponMgr = CreateDefaultSubobject<UTresGumiShipWeaponManager>(TEXT("WeaponMgr"));
    this->m_pProjectileMgr = CreateDefaultSubobject<UTresGumiShipProjectileFactory>(TEXT("ProjectileMgr"));
    this->m_pLockonPrimitiveMgr = CreateDefaultSubobject<UTresGumiShipLockonPrimitiveManager>(TEXT("LockOnPrimMgr"));
    this->m_pGenericTimerManager = CreateDefaultSubobject<UTresGameTimerManagerComponent>(TEXT("GenericTimerManager"));
    this->m_pTimerManagerForLevelOnly = CreateDefaultSubobject<UTresGameTimerManagerComponent>(TEXT("LevelTimerManager"));
    this->m_pDistanceCalculateManager = CreateDefaultSubobject<UTresDistanceCalculateManagerComponent>(TEXT("DistanceCalculateManager"));
    this->m_pGlobalEnemyManager = CreateDefaultSubobject<UTresGumiShipGlobalEnemyManager>(TEXT("GumiShipGlobalEnemyManager"));
    this->m_pGlobalGameDataSet = NULL;
    this->m_pActiveBattleVolume = NULL;
    this->m_pGlobalPrizeManager = NULL;
    this->m_pCurrentEnemyBattleStarter = NULL;
    this->m_pMissionMgr = CreateDefaultSubobject<UTresGumiShipMissionMgr>(TEXT("MissionMgr"));
    this->m_pGumiMissionMgr = CreateDefaultSubobject<UTresGumiShipGumiMissionManager>(TEXT("GumiMissionMgr"));
    this->m_pRaderEntityMgr = CreateDefaultSubobject<UTresGumiShipRaderEntityManager>(TEXT("EntityMgr"));
    this->m_pGummiMenuManager = NULL;
    this->m_pWorldMapCameraActor = NULL;
    this->LoadComplete = true;
}


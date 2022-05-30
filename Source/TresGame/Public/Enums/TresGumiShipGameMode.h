#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGameModeBase.h"
#include "TresGumiShipGameMode.generated.h"

class UTresGumiShipMissionMgr;
class USoundBase;
class ATresGumiShipPrizeItem;
class UTresGameTimerManagerComponent;
class UTresGummiEditorDataTableSet;
class ATresGumiShipBattleVolume;
class ATresGummiMenuManager;
class UTresGumiShipAtkCollisionMgr;
class ATresEventGameOverPawnBase;
class ATresWorldMapCameraActor;
class UTresGumiShipBodyCollisionMgr;
class UTresGumiShipDefCollisionMgr;
class UTresGumiShipWeaponManager;
class UTresGumiShipProjectileFactory;
class UTresGumiShipLockonPrimitiveManager;
class UTresDistanceCalculateManagerComponent;
class UTresGumiShipGlobalEnemyManager;
class UTresGumiShipGlobalGameDataSet;
class ATresGumiShipEnemyBattleStarter;
class UTresGumiShipGumiMissionManager;
class UTresGumiShipRaderEntityManager;

UCLASS(NonTransient)
class ATresGumiShipGameMode : public ATresGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pFieldBGM;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pNormalBattleBGM;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pBossBattleBGM;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pBattleResultBGM;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_pHudSE;
    
    UPROPERTY(EditDefaultsOnly)
    UTresGummiEditorDataTableSet* m_pEditorDataSet;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageMaterialIntensityParameter;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageMaterialBlinkSpeedParameter;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageMaterialApplyTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresGummiMenuManager> GummiMenuManagerRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWorldMapCameraActor> WorldMapCameraActorRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEventGameOverPawnBase> m_GameOverPawn;
    
private:
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresGumiShipAtkCollisionMgr* m_pAtkCollisionMgr;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresGumiShipBodyCollisionMgr* m_pBodyCollisionMgr;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresGumiShipDefCollisionMgr* m_pDefCollisionMgr;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresGumiShipWeaponManager* m_pWeaponMgr;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresGumiShipProjectileFactory* m_pProjectileMgr;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresGumiShipLockonPrimitiveManager* m_pLockonPrimitiveMgr;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresGameTimerManagerComponent* m_pGenericTimerManager;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresGameTimerManagerComponent* m_pTimerManagerForLevelOnly;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresDistanceCalculateManagerComponent* m_pDistanceCalculateManager;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresGumiShipGlobalEnemyManager* m_pGlobalEnemyManager;
    
    UPROPERTY(EditDefaultsOnly)
    UTresGumiShipGlobalGameDataSet* m_pGlobalGameDataSet;
    
    UPROPERTY(DuplicateTransient, Transient)
    ATresGumiShipBattleVolume* m_pActiveBattleVolume;
    
    UPROPERTY(DuplicateTransient, Transient)
    ATresGumiShipPrizeItem* m_pGlobalPrizeManager;
    
    UPROPERTY(DuplicateTransient, Transient)
    ATresGumiShipEnemyBattleStarter* m_pCurrentEnemyBattleStarter;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresGumiShipMissionMgr* m_pMissionMgr;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresGumiShipGumiMissionManager* m_pGumiMissionMgr;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresGumiShipRaderEntityManager* m_pRaderEntityMgr;
    
    UPROPERTY(Transient)
    ATresGummiMenuManager* m_pGummiMenuManager;
    
    UPROPERTY(Transient)
    ATresWorldMapCameraActor* m_pWorldMapCameraActor;
    
public:
    UPROPERTY(BlueprintReadWrite)
    bool LoadComplete;
    
    ATresGumiShipGameMode();
    UFUNCTION(BlueprintCallable)
    void RefleshGuideMarkerArea();
    
    UFUNCTION(BlueprintPure)
    ATresWorldMapCameraActor* GetWorldMapCameraActor() const;
    
    UFUNCTION(BlueprintPure)
    ATresGummiMenuManager* GetGummiMenuManager() const;
    
    UFUNCTION(BlueprintPure)
    UTresGumiShipGumiMissionManager* GetGumiMissionMgr() const;
    
    UFUNCTION(BlueprintPure)
    ATresGumiShipPrizeItem* GetGlobalPrizeManager() const;
    
    UFUNCTION(BlueprintPure)
    ATresGumiShipEnemyBattleStarter* GetCurrentEnemyBattleStarter() const;
    
    UFUNCTION(BlueprintPure)
    ATresGumiShipBattleVolume* GetActiveBattleVolume() const;
    
private:
    UFUNCTION(Exec)
    void _OnOverlapedGuideVolume();
    
};


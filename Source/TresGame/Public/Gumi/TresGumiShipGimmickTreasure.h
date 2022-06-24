#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "TresGumiShipDropPrizeData.h"
#include "GUMI_SHIP_GIMMICK_TREASURE_STATE.h"
#include "GUMI_SHIP_GIMMICK_PLAYER_MODE.h"
#include "ETresGumiShipTreasureSphereID.h"
#include "Engine/LatentActionManager.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "GUMI_SHIP_TREASURE_STATE.h"
#include "TresGumiShipGimmickTreasure.generated.h"

class UObject;
class ATresGumiShipRailSlideArrangement;
class UDataTable;
class UCameraComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType)
class TRESGAME_API ATresGumiShipGimmickTreasure : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* m_GimmickTreasureDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATresGumiShipRailSlideArrangement* m_Arrangement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCameraComponent* m_pTreasureCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTresGumiShipDropPrizeData m_DropPrizeSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresGumiShipTreasureSphereID m_WorldMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DataTableName;
    
public:
    ATresGumiShipGimmickTreasure();
    UFUNCTION()
    void GumiShip_Debug_ForcedTermination_TreasureSphere();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool _SetPlayEventMode(GUMI_SHIP_GIMMICK_PLAYER_MODE _mode);
    
public:
    UFUNCTION(BlueprintCallable)
    bool _SetPlayerPos();
    
protected:
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject_", LatentInfo = "LatentInfo_"))
    void _SetCorePartsLoops(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, float pos);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", LatentInfo = "LatentInfo_"))
    void _PlayRailSlid(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
public:
    UFUNCTION()
    void _OnOverlapBegin(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
    UFUNCTION()
    void _OnHitTreasure(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
protected:
    UFUNCTION(BlueprintPure)
    bool _IsStateEnd();
    
    UFUNCTION(BlueprintPure)
    bool _IsShotCore();
    
    UFUNCTION(BlueprintCallable)
    bool _InitRailSlid();
    
    UFUNCTION(BlueprintPure)
    GUMI_SHIP_TREASURE_STATE _GetState();
    
    UFUNCTION(BlueprintCallable)
    GUMI_SHIP_GIMMICK_TREASURE_STATE _GetRailSlidResult();
    
    UFUNCTION(BlueprintCallable)
    void _ChangeState(GUMI_SHIP_TREASURE_STATE StateID);
    
    UFUNCTION(BlueprintCallable)
    void _AddCorePartsLoops(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, float Speed, float Time);
    
};


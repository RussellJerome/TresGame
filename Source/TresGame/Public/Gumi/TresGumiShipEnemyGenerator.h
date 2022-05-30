#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipEnemyGroupMoveType.h"
#include "ETresGumiShipEnemyGroupDisappearType.h"
#include "TresGumiShipGimmickActorBase.h"
#include "ETresGumiShipEnemySpawnConditionType.h"
#include "TresGumiShipSplinePathMoveParameter.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipEnemyGenerator.generated.h"

class ATresGumiShipEnemyMoveRouteSpline;
class UDataTable;
class ATresGumiShipEnemyGenerator;
class UTresGumiShipEnemyGroupManager;
class UPrimitiveComponent;
class AActor;

UCLASS()
class ATresGumiShipEnemyGenerator : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* m_pUsingEnemyPresetDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_uMaxAttackPermissionNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresGumiShipEnemyGroupMoveType m_eEnemyGroupMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresGumiShipEnemySpawnConditionType m_eMainEnemySpawnConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ATresGumiShipEnemyGenerator*> m_MainSpawnConditionOtherEnemyGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bEnableSubEnemySpawnCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresGumiShipEnemySpawnConditionType m_eSubEnemySpawnConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ATresGumiShipEnemyGenerator*> m_SubSpawnConditionOtherEnemyGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fEnemyGroupSpawnDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bSpawnEnemyLookAtGumiShip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresGumiShipEnemyGroupDisappearType m_eEnemyGroupDisappearType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_eEnemyGroupDisappearTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATresGumiShipEnemyGenerator* m_pDisappearTriggerOtherEnemyGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTresGumiShipSplinePathMoveParameter m_SplinePathMoveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ATresGumiShipEnemyMoveRouteSpline*> m_EnemyMoveRouteSplineList;
    
    UPROPERTY(Export)
    UTresGumiShipEnemyGroupManager* m_pEnemyGroupManager;
    
public:
    ATresGumiShipEnemyGenerator();
    UFUNCTION(BlueprintPure)
    ETresGumiShipEnemySpawnConditionType GetSubEnemySpawnConditionType() const;
    
    UFUNCTION(BlueprintPure)
    ETresGumiShipEnemySpawnConditionType GetMainEnemySpawnConditionType() const;
    
protected:
    UFUNCTION()
    void _OnSubSpawnConditionOtherEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
    UFUNCTION()
    void _OnSubSpawnConditionOtherEnemyGroupDisappear();
    
    UFUNCTION()
    void _OnMainSpawnConditionOtherEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
    UFUNCTION()
    void _OnMainSpawnConditionOtherEnemyGroupDisappear();
    
    UFUNCTION()
    void _OnLeaveEnemySpawnTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void _OnEnterEnemySpawnTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void _OnDisappearTriggerOtherEnemyGroupAppear();
    
};


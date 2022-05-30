#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyShipPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresEnemyUniqueID.h"
#include "UObject/NoExportTypes.h"
#include "EEnemyLargeShipBase.h"
#include "TresEnemyLargeShipPawnBase.generated.h"

class UTresStaticMeshComponent;
class UTresReactorComponent;
class UParticleSystemComponent;
class AActor;
class AStaticMeshActor;
class UParticleSystem;
class ATresEnemyPawnBase;

UCLASS()
class ATresEnemyLargeShipPawnBase : public ATresEnemyShipPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresStaticMeshComponent* m_PropsMeshOnBoard;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> m_TemplateForOverlapCheck;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AStaticMeshActor> m_TemplateOfBattleOnBoardCollision;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FireSparkParticleAsset;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_FireSparkParticleComponent;
    
    UPROPERTY(Transient)
    AStaticMeshActor* m_CollMeshActorOnBoardBattle;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresReactorComponent* m_ReactorComp;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableBattleOnBoard;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableKillOtherShipsOnDead;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShipSinkingStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShipSinkingHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SuicideTime;
    
public:
    ATresEnemyLargeShipPawnBase();
    UFUNCTION(BlueprintPure)
    bool TestBGOverlap(const FRotator& Rotation) const;
    
    UFUNCTION(BlueprintCallable)
    void SetEnableBattleOnBoard(bool Value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnStepStartBattleOnBoard();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnStepSkip();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnStepRide();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnStepAnker();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnEnableRideOnShip();
    
    UFUNCTION(BlueprintPure)
    float GetSuicideTime() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSetBattleOnBoardMode();
    
    UFUNCTION(BlueprintPure)
    bool EnableBattleOnBoard() const;
    
    UFUNCTION(BlueprintCallable)
    ATresEnemyPawnBase* BP_SpawnOtherShip(ETresEnemyUniqueID EnemyID, FVector Location, TEnumAsByte<EEnemyLargeShipBase::Type> RotType, bool bRequireCoreFacedToPlayer);
    
};


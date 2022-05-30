#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyGenerator.h"
#include "TresGumiShipSplinePathMoveParameter.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipRailShootingBattleStarterGenerator.generated.h"

class ATriggerBase;
class ATresGumiShipEnemyMoveRouteSpline;
class UPrimitiveComponent;
class AActor;

UCLASS()
class ATresGumiShipRailShootingBattleStarterGenerator : public ATresGumiShipEnemyGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTresGumiShipSplinePathMoveParameter m_EncountSymbolMovementParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ATresGumiShipEnemyMoveRouteSpline* m_pEncountSymbolMoveRouteSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ATriggerBase* m_pEncountSymbolActivateTrigger;
    
public:
    ATresGumiShipRailShootingBattleStarterGenerator();
private:
    UFUNCTION()
    void _OnLeaveActivateTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void _OnEnterActivateTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};


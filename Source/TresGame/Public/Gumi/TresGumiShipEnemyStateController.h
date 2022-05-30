#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresGumiShipEnemyUsableAttackMethodData.h"
#include "ETresGumiShipSplineEventType.h"
#include "ETresGumiShipEnemyStateID.h"
#include "ETresGumiShipEnemyStateResult.h"
#include "TresGumiShipEnemyStateController.generated.h"

class ATresGumiShipEnemyPawnBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipEnemyStateController : public UActorComponent {
    GENERATED_BODY()
public:
    UTresGumiShipEnemyStateController();
    UFUNCTION(BlueprintImplementableEvent)
    void Setup(ATresGumiShipEnemyPawnBase* ControllTargetEnemy);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyStateFinish(ETresGumiShipEnemyStateID FinishStateID, ETresGumiShipEnemyStateResult Result);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyResultAttackPermissionRequest(bool Result, const TMap<FName, FTresGumiShipEnemyUsableAttackMethodData>& AttackableMethodList);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyEnemyGroupMoveRouteSplineEvent(ETresGumiShipSplineEventType EventType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyArrivedEnemyGroupMoveRouteSplineEnd(int32 CurrentMoveRouteSplineIndex);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "ETresGumiShipSplineEventType.h"
#include "TresGumiShipEnemyGroupManager.generated.h"

class ATresGumiShipEnemyPawnBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipEnemyGroupManager : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGroupMemberEnemyDeadSignature, const ATresGumiShipEnemyPawnBase*, DeadEnemy);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyGroupWipeOutSignature, const FTresGumiShipEnemyGroupWipeOutData&, EnemyGroupWipeOutData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEnemyGroupDisappearSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEnemyGroupAppearSignature);
    
    UPROPERTY(BlueprintAssignable)
    FEnemyGroupAppearSignature OnEnemyGroupAppear;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyGroupDisappearSignature OnEnemyGroupDisappear;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyGroupWipeOutSignature OnEnemyGroupWipeOut;
    
    UTresGumiShipEnemyGroupManager();
    UFUNCTION(BlueprintCallable)
    void SetSplineMoveSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineMoveDeceleration(float Deceleration);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineMoveAcceleration(float Acceleration);
    
    UFUNCTION(BlueprintCallable)
    void SetReverseSplineMove(bool bReverseMoveEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSplineMoveSpeed(float MaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetLoopSplineMove(bool bLoopMoveEnable);
    
    UFUNCTION(BlueprintCallable)
    void PauseSplineMove(bool bPauseEnable);
    
    UFUNCTION(BlueprintPure)
    bool IsReverseSplineMove() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPauseSplineMove() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLoopSplineMove() const;
    
    UFUNCTION(BlueprintPure)
    bool IsArrivedSplineEnd() const;
    
    UFUNCTION(BlueprintPure)
    float GetSplineMoveSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetSplineMoveDeceleration() const;
    
    UFUNCTION(BlueprintPure)
    float GetSplineMoveAcceleration() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSplineMoveSpeed() const;
    
    UFUNCTION(BlueprintPure)
    ATresGumiShipEnemyPawnBase* GetGroupMemberEnemyListTop() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentMoveRouteSplineIndex() const;
    
    UFUNCTION(BlueprintCallable)
    bool ChangeEnemyGroupMoveRouteSpline(int32 NewMoveRouteSplineIndex);
    
private:
    UFUNCTION()
    void _OnSplinePathMoveEvent(ETresGumiShipSplineEventType eEventType);
    
    UFUNCTION()
    void _OnGroupMemberEnemyDead(ATresGumiShipEnemyPawnBase* pDeadEnemy);
    
    UFUNCTION()
    void _OnGroupMemberEnemyAppear(ATresGumiShipEnemyPawnBase* pAppearEnemy);
    
};


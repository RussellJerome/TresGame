#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SQEX_SplineMoverExecutor.h"
#include "TresGimmickCA_TickControlInterface.h"
#include "TresGimmickCA_MovableFishBase.generated.h"

class ASQEX_SplineActor;

UCLASS(Config=Game)
class ATresGimmickCA_MovableFishBase : public AActor, public ITresGimmickCA_TickControlInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSQEX_SplineMoverExecutor SplineMover;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_TickEnableRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bEnableMove;
    
public:
    ATresGimmickCA_MovableFishBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* Actor, bool bAutoMoveStart);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetReverse(bool Reverse);
    
    UFUNCTION(BlueprintCallable)
    void SetLoop(bool Loop);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMove(bool bEnable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnArrival();
    
    UFUNCTION(BlueprintPure)
    float GetSpeed();
    
    
    // Fix for true pure virtual functions not being implemented
};


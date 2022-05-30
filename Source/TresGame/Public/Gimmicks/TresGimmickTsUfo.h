#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "ETresBodyPushPowerLevel.h"
#include "TresGimmickTsUfo.generated.h"

class UTresBodyCollComponent;
class UTresLockonTargetComponent;
class UTresSplineMoverComponent;
class ASQEX_SplineActor;

UCLASS(Abstract)
class ATresGimmickTsUfo : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresBodyCollComponent* BodyCollComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSplineMoverComponent* SplineMoverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConditionCanMoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConditionCanMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SplineUpdateLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresBodyPushPowerLevel BodyPushPowerLevel;
    
public:
    ATresGimmickTsUfo();
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* spline);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetReverse(bool Reverse);
    
    UFUNCTION(BlueprintCallable)
    void SetLockonTargetComponent(UTresLockonTargetComponent* InLockonTarget);
    
    UFUNCTION(BlueprintPure)
    float GetSpeed() const;
    
    UFUNCTION(BlueprintPure)
    bool GetReverse() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_CantMoveEvent(float moveSize);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmick_Ts03_Crane.generated.h"

class UTresBodyCollComponent;
class ASQEX_SplineActor;

UCLASS(Abstract)
class ATresGimmick_Ts03_Crane : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresBodyCollComponent* BodyCollComponent;
    
public:
    ATresGimmick_Ts03_Crane();
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* spline);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float Speed);
    
    UFUNCTION(BlueprintPure)
    FVector GetSpeedVec() const;
    
};


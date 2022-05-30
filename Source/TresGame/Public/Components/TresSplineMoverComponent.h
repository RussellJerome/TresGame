#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SQEX_SplineMoverExecutor.h"
#include "TresSplineMoverSignatureDelegate.h"
#include "ETresSplineMoverMove.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresSplineMoverComponent.generated.h"

class ASQEX_SplineActor;
class USplineComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresSplineMoverComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSQEX_SplineMoverExecutor SplineMover;
    
    UPROPERTY(BlueprintAssignable)
    FTresSplineMoverSignature OnArrival;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresSplineMoverMove::Type> MoveType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float interpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Param1;
    
public:
    UTresSplineMoverComponent();
    UFUNCTION(BlueprintCallable)
    void SetSplineComponent(USplineComponent* SplineComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* Actor, bool nearest);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetReverse(bool Reverse);
    
    UFUNCTION(BlueprintCallable)
    void SetPosRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetPos(float pos);
    
    UFUNCTION(BlueprintCallable)
    void SetLoop(bool Loop);
    
    UFUNCTION(BlueprintPure)
    FVector GetSplineActorTerminationPos(bool IsReverse);
    
    UFUNCTION(BlueprintPure)
    ASQEX_SplineActor* GetSplineActorLast();
    
    UFUNCTION(BlueprintPure)
    ASQEX_SplineActor* GetSplineActorFirst();
    
    UFUNCTION(BlueprintPure)
    float GetSpeed();
    
    UFUNCTION(BlueprintPure)
    FRotator GetRotator() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocation() const;
    
};


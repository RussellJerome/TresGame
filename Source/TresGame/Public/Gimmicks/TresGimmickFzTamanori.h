#pragma once
#include "CoreMinimal.h"
#include "TresGimmickBalanceBall.h"
#include "Engine/EngineTypes.h"
#include "TresGimmickFzTamanori.generated.h"

class AActor;
class UPrimitiveComponent;
class USphereComponent;
class ATresTriggerBox;

UCLASS()
class ATresGimmickFzTamanori : public ATresGimmickBalanceBall {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* TriggerSensor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BreakItself;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BreakSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BreakDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveAddThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveThicknessMaxScale;
    
    ATresGimmickFzTamanori();
    UFUNCTION(BlueprintNativeEvent)
    void TriggerOverlapped(ATresTriggerBox* TriggerActor);
    
    UFUNCTION(BlueprintNativeEvent)
    void SetTamanoriScale(float fScale);
    
private:
    UFUNCTION()
    void OnEndTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    UPrimitiveComponent* GetBalanceBallMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BreakBalanceBall();
    
};


#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorMI_04_Base.h"
#include "TresGimmickMI_04_EventDoor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickGeneratorMI_04_EventBase.generated.h"

class ASQEX_SplineActor;

UCLASS(Abstract)
class ATresGimmickGeneratorMI_04_EventBase : public ATresGimmickGeneratorMI_04_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FTresGimmickMI_04_EventDoor> m_DoorDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    float DoorAnimSpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    float DoorShakeAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FVector PositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Interp)
    float DoorSpan;
    
public:
    ATresGimmickGeneratorMI_04_EventBase();
protected:
    UFUNCTION(BlueprintCallable)
    void Setup();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRotatorOffset(const FRotator& Rotator);
    
    UFUNCTION(BlueprintPure)
    float GetDelta();
    
    UFUNCTION(BlueprintPure)
    ASQEX_SplineActor* FindSplineActorByTag(FName TagName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Setup();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Execute();
    
};


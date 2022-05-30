#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorBase.h"
#include "TresMI_02GeneratorRuleParam.h"
#include "TresGimmickGeneratorMI_02Base.generated.h"

class ASQEX_SplineActor;
class USplineComponent;
class AActor;

UCLASS(Abstract)
class ATresGimmickGeneratorMI_02Base : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    ASQEX_SplineActor* m_pSplineActor;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InterpSpeedRotate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FarLength;
    
public:
    ATresGimmickGeneratorMI_02Base();
    UFUNCTION(BlueprintCallable)
    void StopGimmick();
    
    UFUNCTION(BlueprintCallable)
    void spawn();
    
    UFUNCTION(BlueprintCallable)
    void SetWaterSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetExecModFrame(int32 mod);
    
    UFUNCTION(BlueprintCallable)
    void SetChildrenActorActive(bool bActive);
    
    UFUNCTION(BlueprintPure)
    ASQEX_SplineActor* GetSplineActor();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_StopGimmickActor(AActor* Actor);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_RefreshActor(AActor* Actor, FTresMI_02GeneratorRuleParam Param);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_GenerateActor(AActor* Actor, FTresMI_02GeneratorRuleParam Param);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_AccessTriggerVolumeActor(bool In, AActor* Actor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_AccessTriggerVolume(bool In);
    
public:
    UFUNCTION(BlueprintCallable)
    void AccessTriggerVolume(bool In);
    
};


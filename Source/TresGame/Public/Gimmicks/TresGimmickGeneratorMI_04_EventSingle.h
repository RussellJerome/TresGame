#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorMI_04_EventBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickGeneratorMI_04_EventSingle.generated.h"

class AActor;

UCLASS(Abstract)
class ATresGimmickGeneratorMI_04_EventSingle : public ATresGimmickGeneratorMI_04_EventBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    AActor* TargetDoor;
    
public:
    ATresGimmickGeneratorMI_04_EventSingle();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FTransform BPIE_GetTargetTransform();
    
};


#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorMI_04_EventBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickGeneratorMI_04_EventMulti.generated.h"

UCLASS(Abstract)
class ATresGimmickGeneratorMI_04_EventMulti : public ATresGimmickGeneratorMI_04_EventBase {
    GENERATED_BODY()
public:
    ATresGimmickGeneratorMI_04_EventMulti();
    UFUNCTION(BlueprintImplementableEvent)
    FVector BPEV_GetDoorStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    float BPEV_GetDoorSpan();
    
    UFUNCTION(BlueprintImplementableEvent)
    FVector BPEV_GetDoorEnd();
    
};


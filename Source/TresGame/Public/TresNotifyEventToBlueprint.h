#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresNotifyEventToBlueprint.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresNotifyEventToBlueprint : public UObject {
    GENERATED_BODY()
public:
    UTresNotifyEventToBlueprint();
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreLoadMap();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostLoadMap();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayPostcardFieldVoice();
    
};


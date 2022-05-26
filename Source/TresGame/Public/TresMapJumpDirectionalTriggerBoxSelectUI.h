#pragma once
#include "CoreMinimal.h"
#include "TresMapJumpDirectionalTriggerBox.h"
#include "TresLocText.h"
#include "TresMapJumpDirectionalTriggerBoxSelectUI.generated.h"

UCLASS()
class ATresMapJumpDirectionalTriggerBoxSelectUI : public ATresMapJumpDirectionalTriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FTresLocText ChoiceTitle;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<FTresLocText> Choices;
    
    ATresMapJumpDirectionalTriggerBoxSelectUI();
};


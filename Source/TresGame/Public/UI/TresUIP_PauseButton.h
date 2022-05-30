#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsButton.h"
#include "TresUIP_PauseButton.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_PauseButton : public UTresASProxyTresControlsButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UGFxObject* m_InAnimation;
    
public:
    UTresUIP_PauseButton();
};


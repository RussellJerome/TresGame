#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_GameOver.generated.h"

class UTresASProxyTresControlsButton;
class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_GameOver : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTresASProxyTresControlsButton* m_Button[5];
    
    UPROPERTY()
    UGFxObject* m_HintText;
    
public:
    UTresUIP_GameOver();
};


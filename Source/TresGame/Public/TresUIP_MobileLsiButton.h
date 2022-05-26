#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsButton.h"
#include "TresUIP_MobileLsiButton.generated.h"

class UTresASProxyTresControlsImageIcon;
class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_MobileLsiButton : public UTresASProxyTresControlsButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyTresControlsImageIcon* m_ImageIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_CompleteMark;
    
public:
    UTresUIP_MobileLsiButton();
};


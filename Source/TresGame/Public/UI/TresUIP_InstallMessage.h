#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_InstallMessage.generated.h"

class UGFxObject;
class UTresASProxyTresControlsButton;

UCLASS()
class UTresUIP_InstallMessage : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Main;
    
    UPROPERTY(Transient)
    UGFxObject* m_TextMessage;
    
    UPROPERTY(Transient)
    UGFxObject* m_Gauge;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_ButtonOK;
    
public:
    UTresUIP_InstallMessage();
};


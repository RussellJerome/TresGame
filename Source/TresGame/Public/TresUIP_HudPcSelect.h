#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HudPcSelect.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_HudPcSelect : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pPCInfoL;
    
    UPROPERTY(Transient)
    UGFxObject* m_pPCInfoR;
    
    UPROPERTY(Transient)
    UGFxObject* m_pPCPadTextL;
    
    UPROPERTY(Transient)
    UGFxObject* m_pPCPadTextR;
    
public:
    UTresUIP_HudPcSelect();
};


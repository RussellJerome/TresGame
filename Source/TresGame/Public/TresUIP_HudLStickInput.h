#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HudLStickInput.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_HudLStickInput : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pLStickInput;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLStickInputPad;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLStickInputKey;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLStickIconText;
    
public:
    UTresUIP_HudLStickInput();
};


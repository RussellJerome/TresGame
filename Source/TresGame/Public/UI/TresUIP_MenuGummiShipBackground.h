#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_MenuGummiShipBackground.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_MenuGummiShipBackground : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_gummishipMenuBg;
    
public:
    UTresUIP_MenuGummiShipBackground();
};


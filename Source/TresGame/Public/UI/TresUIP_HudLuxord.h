#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudLuxord.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_HudLuxord : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLimGg;
    
public:
    UTresUIP_HudLuxord();
};


#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudRailScope.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_HudRailScope : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRailScopeMove;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRailScope;
    
public:
    UTresUIP_HudRailScope();
};


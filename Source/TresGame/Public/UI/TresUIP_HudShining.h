#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudShining.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_HudShining : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Root;
    
    UPROPERTY(Transient)
    UGFxObject* m_UltimaLockSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_UltimaLockGauge;
    
public:
    UTresUIP_HudShining();
};


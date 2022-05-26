#pragma once
#include "CoreMinimal.h"
#include "TresUIP_HudParts.h"
#include "TresUIP_HudLeftScoreHit.generated.h"

class UGFxObject;
class UTresASProxyTresControlsBitmapNumber;

UCLASS(NonTransient)
class UTresUIP_HudLeftScoreHit : public UTresUIP_HudParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pGFxScoreSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxNewRecord;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxCounterEffect;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxHit;
    
public:
    UTresUIP_HudLeftScoreHit();
};


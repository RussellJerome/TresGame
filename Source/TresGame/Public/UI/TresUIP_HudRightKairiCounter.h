#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HudRightKairiCounter.generated.h"

class UGFxObject;
class UTresUIP_HudParts;

UCLASS()
class UTresUIP_HudRightKairiCounter : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pRoot;
    
    UPROPERTY(Transient)
    UTresUIP_HudParts* m_HudParts;
    
public:
    UTresUIP_HudRightKairiCounter();
};


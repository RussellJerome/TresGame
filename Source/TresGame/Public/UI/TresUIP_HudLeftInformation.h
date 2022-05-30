#pragma once
#include "CoreMinimal.h"
#include "TresUIP_HudParts.h"
#include "TresUIP_HudLeftInformation.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudLeftInformation : public UTresUIP_HudParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UGFxObject* m_TextField;
    
public:
    UTresUIP_HudLeftInformation();
};


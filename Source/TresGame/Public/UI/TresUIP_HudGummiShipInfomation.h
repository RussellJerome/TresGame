#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresUIP_HudGummiShipInfomation.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudGummiShipInfomation : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pTextInfo;
    
public:
    UTresUIP_HudGummiShipInfomation();
};


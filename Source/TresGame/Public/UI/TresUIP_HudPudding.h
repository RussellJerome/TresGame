#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudPudding.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_HudPudding : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxPuddingCountDown;
    
public:
    UTresUIP_HudPudding();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};


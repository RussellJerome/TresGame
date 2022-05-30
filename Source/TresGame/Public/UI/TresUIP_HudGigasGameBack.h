#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudGigasGameBack.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_HudGigasGameBack : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UGFxObject* m_TargetObject;
    
public:
    UTresUIP_HudGigasGameBack();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};


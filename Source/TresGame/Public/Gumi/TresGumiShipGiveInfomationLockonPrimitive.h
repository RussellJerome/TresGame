#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipTrackingPrimitive.h"
#include "TresGumiShipGiveInfomationLockonPrimitive.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipGiveInfomationLockonPrimitive : public UTresGumiShipTrackingPrimitive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 m_bHpGaugeVisibility: 1;
    
public:
    UTresGumiShipGiveInfomationLockonPrimitive();
};


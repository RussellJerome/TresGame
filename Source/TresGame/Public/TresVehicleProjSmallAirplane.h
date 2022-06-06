#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresVehicleProjSmallAirplane.generated.h"

UCLASS(Abstract)
class ATresVehicleProjSmallAirplane : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Param_WindFlag;
    
    ATresVehicleProjSmallAirplane();
};


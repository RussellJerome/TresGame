#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction6_e_ex353_ThornWildDanceStart.generated.h"

class UCurveFloat;

UCLASS(HideDropdown)
class UTresAction6_e_ex353_ThornWildDanceStart : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_FloatSpeedData;
    
    UTresAction6_e_ex353_ThornWildDanceStart();
};


#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_he903_Wind.generated.h"

class UCurveFloat;

UCLASS(HideDropdown)
class UTresAction2_e_he903_Wind : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxLoopCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxLoopTime;
    
    UPROPERTY(EditAnywhere)
    bool m_bLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_ForceCurve;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bPermitAttack;
    
    UTresAction2_e_he903_Wind();
};


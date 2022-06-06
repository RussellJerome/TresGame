#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex761_DarknessSpreadOutBase.h"
#include "TresAction2_e_ex761_DarknessSpreadOut.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_ex761_DarknessSpreadOut : public UTresAction_e_ex761_DarknessSpreadOutBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_AppearBlockDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearBlockOtherPawnDistance;
    
public:
    UTresAction2_e_ex761_DarknessSpreadOut();
};


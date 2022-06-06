#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresNpcState_n_dw003_FRMickeyRiku.generated.h"

class UTresLockonTargetComponent;

UCLASS()
class UTresNpcState_n_dw003_FRMickeyRiku : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UTresLockonTargetComponent* m_LockonTarget;
    
    UTresNpcState_n_dw003_FRMickeyRiku();
};


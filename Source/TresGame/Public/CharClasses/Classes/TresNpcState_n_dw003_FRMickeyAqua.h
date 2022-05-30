#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresNpcState_n_dw003_FRMickeyAqua.generated.h"

class UTresLockonTargetComponent;

UCLASS()
class UTresNpcState_n_dw003_FRMickeyAqua : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UTresLockonTargetComponent* m_LockonTarget;
    
    UTresNpcState_n_dw003_FRMickeyAqua();
};


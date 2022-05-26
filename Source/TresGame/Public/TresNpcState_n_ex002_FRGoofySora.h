#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresNpcState_n_ex002_FRGoofySora.generated.h"

class UTresLockonTargetComponent;

UCLASS()
class UTresNpcState_n_ex002_FRGoofySora : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UTresLockonTargetComponent* m_LockonTarget;
    
    UTresNpcState_n_ex002_FRGoofySora();
};


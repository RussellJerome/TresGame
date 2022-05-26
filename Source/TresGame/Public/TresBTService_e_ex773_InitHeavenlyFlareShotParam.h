#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_e_ex773_InitHeavenlyFlareShotParam.generated.h"

UCLASS()
class UTresBTService_e_ex773_InitHeavenlyFlareShotParam : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bStartNotify;
    
    UTresBTService_e_ex773_InitHeavenlyFlareShotParam();
};


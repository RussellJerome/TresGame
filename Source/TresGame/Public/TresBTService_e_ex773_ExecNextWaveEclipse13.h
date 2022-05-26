#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_e_ex773_ExecNextWaveEclipse13.generated.h"

UCLASS()
class UTresBTService_e_ex773_ExecNextWaveEclipse13 : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ReserveTime;
    
    UPROPERTY(EditAnywhere)
    bool bStartNotify;
    
    UPROPERTY(EditAnywhere)
    bool bNotifyJustInCase;
    
    UTresBTService_e_ex773_ExecNextWaveEclipse13();
};


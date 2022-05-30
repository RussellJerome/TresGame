#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex773_IsWaveNumEclipse13.generated.h"

UCLASS()
class UTresBTDecorator_e_ex773_IsWaveNumEclipse13 : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 RequestWave;
    
    UTresBTDecorator_e_ex773_IsWaveNumEclipse13();
};


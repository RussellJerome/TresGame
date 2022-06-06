#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFWaterRide.h"
#include "TresNpcState_AFWaterRide.generated.h"

class AActor;

UCLASS()
class UTresNpcState_AFWaterRide : public UTresCharState_AFWaterRide {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_pAttachActor;
    
    UTresNpcState_AFWaterRide();
};


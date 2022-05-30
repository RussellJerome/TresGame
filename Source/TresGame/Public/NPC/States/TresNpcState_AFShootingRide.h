#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFShootingRide.h"
#include "TresNpcState_AFShootingRide.generated.h"

class AActor;

UCLASS()
class UTresNpcState_AFShootingRide : public UTresCharState_AFShootingRide {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_pAttachActor;
    
    UTresNpcState_AFShootingRide();
};


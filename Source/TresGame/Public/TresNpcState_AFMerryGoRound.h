#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFMerryGoRound.h"
#include "TresNpcState_AFMerryGoRound.generated.h"

class AActor;

UCLASS()
class UTresNpcState_AFMerryGoRound : public UTresCharState_AFMerryGoRound {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_pAttachActor;
    
    UTresNpcState_AFMerryGoRound();
};


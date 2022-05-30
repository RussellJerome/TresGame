#pragma once
#include "CoreMinimal.h"
#include "TresBTTask_MoveTo.h"
#include "TresNpcBTTask_NpcMoveTo.generated.h"

UCLASS()
class UTresNpcBTTask_NpcMoveTo : public UTresBTTask_MoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bWalk;
    
    UTresNpcBTTask_NpcMoveTo();
};


#pragma once
#include "CoreMinimal.h"
#include "TresBTDecorator_RangeCheck.h"
#include "TresNpcBTDecorator_NpcRangeCheck.generated.h"

UCLASS()
class UTresNpcBTDecorator_NpcRangeCheck : public UTresBTDecorator_RangeCheck {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bUseLockOnTargetLocation;
    
    UPROPERTY(EditAnywhere)
    bool m_bSimpleCalculateRange;
    
    UTresNpcBTDecorator_NpcRangeCheck();
};


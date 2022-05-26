#pragma once
#include "CoreMinimal.h"
#include "TresPawnOverlapComponentBase.h"
#include "TresLockonPriorityOverlapComponent_e_ex356.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresLockonPriorityOverlapComponent_e_ex356 : public UTresPawnOverlapComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableLimitAngle: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitAngle;
    
public:
    UTresLockonPriorityOverlapComponent_e_ex356();
};


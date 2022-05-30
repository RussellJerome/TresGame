#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSubActor_e_dw402_SetupParam.generated.h"

UCLASS(Abstract)
class ATresSubActor_e_dw402_SetupParam : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_pro_ShadowEffectLimitRadius;
    
    UPROPERTY(EditAnywhere)
    float m_pro_DevilRiseLimitRadius;
    
    UPROPERTY(EditAnywhere)
    float m_pro_DevilDiveLimitRadius;
    
    ATresSubActor_e_dw402_SetupParam();
};


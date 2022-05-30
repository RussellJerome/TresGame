#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "TresBTTask_SurroundShadowMove_T.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS()
class UTresBTTask_SurroundShadowMove_T : public UTresBTTask_SequentialExecProcess {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(EditAnywhere)
    float m_CommonUpdateTime;
    
    UPROPERTY(EditAnywhere)
    float m_SurroundRadius;
    
    UPROPERTY(EditAnywhere)
    float m_SurroundDefinition;
    
    UPROPERTY(VisibleDefaultsOnly)
    float m_SurroundRadiusValue;
    
    UPROPERTY(EditAnywhere)
    float m_SurroundTimeLimit;
    
    UTresBTTask_SurroundShadowMove_T();
};


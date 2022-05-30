#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "TresBTTask_CloseToTarget_Avoid_T.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS()
class TRESGAME_API UTresBTTask_CloseToTarget_Avoid_T : public UTresBTTask_SequentialExecProcess {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(EditAnywhere)
    float m_CommonMinDistance;
    
    UPROPERTY(EditAnywhere)
    float m_CommonPawnDistance;
    
    UPROPERTY(EditAnywhere)
    float m_CommonUpdateTime;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_Angle;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_ItemSpace;
    
    UTresBTTask_CloseToTarget_Avoid_T();
};


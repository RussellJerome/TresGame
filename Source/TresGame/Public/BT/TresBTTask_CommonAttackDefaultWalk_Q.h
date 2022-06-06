#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialAttackProcess.h"
#include "TresBTTask_CommonAttackDefaultWalk_Q.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS()
class UTresBTTask_CommonAttackDefaultWalk_Q : public UTresBTTask_SequentialAttackProcess {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(EditAnywhere)
    float m_CommonUpdateTime;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_Angle;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_ItemSpace;
    
    UTresBTTask_CommonAttackDefaultWalk_Q();
};


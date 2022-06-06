#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex367_ChangeBehavior.generated.h"

class UBehaviorTree;

UCLASS()
class UTresAction3_e_ex367_ChangeBehavior : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UBehaviorTree* m_Behavior;
    
    UPROPERTY(EditAnywhere)
    bool m_ChangeMine;
    
    UTresAction3_e_ex367_ChangeBehavior();
};


#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_GetAttackPermission.generated.h"

UCLASS()
class UTresBTDecorator_GetAttackPermission : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bCheckOnly;
    
    UPROPERTY(EditAnywhere)
    float m_ElapsedTimeSinceLastAttack;
    
    UTresBTDecorator_GetAttackPermission();
};


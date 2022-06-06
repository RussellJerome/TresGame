#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_ProjectileCheck.generated.h"

UCLASS()
class UTresBTDecorator_ProjectileCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bIsReflected;
    
    UTresBTDecorator_ProjectileCheck();
};


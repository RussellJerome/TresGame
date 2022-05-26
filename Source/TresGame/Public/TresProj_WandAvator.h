#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProj_WandAvator.generated.h"

class UTresLockonTargetComponent;

UCLASS(Abstract)
class ATresProj_WandAvator : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UTresLockonTargetComponent* m_AttackTargetComponent;
    
public:
    ATresProj_WandAvator();
};


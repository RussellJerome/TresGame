#pragma once
#include "CoreMinimal.h"
#include "TresAction_EnemyShipBase_StoleTrapBase.h"
#include "TresAction_EnemyShipBase_StoleTrap.generated.h"

class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAction_EnemyShipBase_StoleTrap : public UTresAction_EnemyShipBase_StoleTrapBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_PointEffectComp;
    
public:
    UTresAction_EnemyShipBase_StoleTrap();
};


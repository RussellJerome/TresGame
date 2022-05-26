#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "Tres_e_ex082_LocomotionDefinition_SnowChaseBase.generated.h"

UCLASS(Abstract)
class UTres_e_ex082_LocomotionDefinition_SnowChaseBase : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_DashDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DashMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DashAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowAcceleration;
    
public:
    UTres_e_ex082_LocomotionDefinition_SnowChaseBase();
};


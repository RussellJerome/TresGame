#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "Tres_LocomotionDefinition_SnowChaseParam.h"
#include "Tres_e_ex046_LocomotionDefinition_SnowChase.generated.h"

UCLASS(Abstract)
class UTres_e_ex046_LocomotionDefinition_SnowChase : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FTres_LocomotionDefinition_SnowChaseParam m_SnowChaseParam;
    
public:
    UTres_e_ex046_LocomotionDefinition_SnowChase();
};


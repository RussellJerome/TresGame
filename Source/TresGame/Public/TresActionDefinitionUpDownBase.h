#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresActionDefinitionUpDownBase.generated.h"

UCLASS(Abstract)
class UTresActionDefinitionUpDownBase : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_MaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Accel;
    
public:
    UTresActionDefinitionUpDownBase();
};


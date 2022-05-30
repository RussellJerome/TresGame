#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresGimmickEx781GravitySphereGravityType.h"
#include "TresAction8_e_ex781_ChangeHighVoltageGravity.generated.h"

class UCurveFloat;

UCLASS()
class UTresAction8_e_ex781_ChangeHighVoltageGravity : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresGimmickEx781GravitySphereGravityType m_GravityType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GravityPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GravityTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_GravityRateCurve;
    
    UTresAction8_e_ex781_ChangeHighVoltageGravity();
};


#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex781_TwistJump.generated.h"

class UCurveFloat;
class UEnvQuery;

UCLASS()
class UTresAction2_e_ex781_TwistJump : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_JumpScaleCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_MoveEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JumpHight;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsLand;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsBodyNormal;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsSetAbort;
    
    UTresAction2_e_ex781_TwistJump();
};


#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex005_ChangeTowerMode.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction2_e_ex005_ChangeTowerMode : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQ_AppearLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GravityScale;
    
    UPROPERTY(EditAnywhere)
    float m_JumpHeight;
    
    UPROPERTY(EditAnywhere)
    float m_SandDiveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_SandDiveAcceleration;
    
    UPROPERTY(EditAnywhere)
    float m_SandDiveMaxSpeed;
    
public:
    UTresAction2_e_ex005_ChangeTowerMode();
};


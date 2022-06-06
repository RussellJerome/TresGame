#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresMove1_e_ex005_SandMove.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class UTresMove1_e_ex005_SandMove : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SandSmokeEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverrideAccelMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverrideAccelAcceleration;
    
public:
    UTresMove1_e_ex005_SandMove();
};


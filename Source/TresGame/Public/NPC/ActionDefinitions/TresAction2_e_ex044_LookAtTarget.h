#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex044_LookAtTarget.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_ex044_LookAtTarget : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchDamp1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchDamp2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchChangeDampAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchAccept;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchVib;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawDamp1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawDamp2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawChangeDampAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawAccept;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawVib;
    
    UTresAction2_e_ex044_LookAtTarget();
};


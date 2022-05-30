#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex044_Discharge.generated.h"

UCLASS(HideDropdown)
class UTresAction3_e_ex044_Discharge : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fTurnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTurnTimeDeviation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHeightTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHeightTimeDeviation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHeightDeviation;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bNoHiegtChangeOnWall;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fMaxRiseVelocity;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fAccel;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fDamp;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fPitchVelocity;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fPitchAccel;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fPitchDamp;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fYawVelocity;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fYawAccel;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fYawDamp;
    
    UTresAction3_e_ex044_Discharge();
};


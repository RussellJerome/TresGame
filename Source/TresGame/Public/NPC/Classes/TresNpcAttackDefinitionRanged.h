#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresNpcAttackDefinitionRanged.generated.h"

UCLASS(HideDropdown)
class UTresNpcAttackDefinitionRanged : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bPitch: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchToleranceUp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchToleranceDown;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotPitchMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotPitchMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotYawMinMax;
    
public:
    UTresNpcAttackDefinitionRanged();
};


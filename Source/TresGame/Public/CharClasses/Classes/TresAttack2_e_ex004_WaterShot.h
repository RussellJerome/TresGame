#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex004_WaterShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex004_WaterShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_ShotCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_YawSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PitchSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PitchLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShotAngleYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShotAnglePitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShotInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpFirePitchMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpFirePitchMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DownFirePitchMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DownFirePitchMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FirePitchMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FirePitchMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireHeight;
    
public:
    UTresAttack2_e_ex004_WaterShot();
};


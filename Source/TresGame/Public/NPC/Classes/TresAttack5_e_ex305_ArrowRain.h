#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex305_ArrowRain.generated.h"

UCLASS(HideDropdown)
class UTresAttack5_e_ex305_ArrowRain : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_ArrowRainHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArrowRainSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArrowRainRadiusMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArrowRainRadiusMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArrowRainRadiusInitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArrowRainRadiusAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArrowRainRadiusMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ArrowRainMinArrowNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ArrowRainMaxArrowNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_LightCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StLightTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EndLightTime;
    
public:
    UTresAttack5_e_ex305_ArrowRain();
};


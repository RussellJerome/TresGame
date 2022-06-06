#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex357_Base.h"
#include "TornadoCutWindParam_e_ex357.h"
#include "RootMotionScaleParam_e_ex358.h"
#include "TresAttack2_e_ex357_TornadoCut.generated.h"

class ATresWaterCurrentSplineActor;

UCLASS(HideDropdown)
class UTresAttack2_e_ex357_TornadoCut : public UTresAttack_e_ex357_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsAbsorptionOnly: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsAttackOnly: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex358 m_MinRootMotionScaleParamLand;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex358 m_MaxRootMotionScaleParamLand;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex358 m_MinRootMotionScaleParamAir;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex358 m_MaxRootMotionScaleParamAir;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWaterCurrentSplineActor> m_WaterSplineClass;
    
    UPROPERTY(EditDefaultsOnly)
    FTornadoCutWindParam_e_ex357 m_MinWindParamLand;
    
    UPROPERTY(EditDefaultsOnly)
    FTornadoCutWindParam_e_ex357 m_MaxWindParamLand;
    
    UPROPERTY(EditDefaultsOnly)
    FTornadoCutWindParam_e_ex357 m_MinWindParamAir;
    
    UPROPERTY(EditDefaultsOnly)
    FTornadoCutWindParam_e_ex357 m_MaxWindParamAir;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LandHomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirHomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirHomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirHomingLimitAnglePitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndHomingSpeed;
    
public:
    UTresAttack2_e_ex357_TornadoCut();
};


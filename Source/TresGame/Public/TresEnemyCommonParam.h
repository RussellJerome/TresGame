#pragma once
#include "CoreMinimal.h"
#include "TresDamageCommonParam.h"
#include "TresEnemyCommonParam.generated.h"

class UCurveFloat;
class UParticleSystem;

UCLASS(Abstract)
class UTresEnemyCommonParam : public UTresDamageCommonParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_SmallDmgGravityScaleReinstateTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BlowDmgWallHitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BlowDmgWallHitAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectKnockBackPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectKnockBackBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectKnockBackVelocityZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirReflectKnockBackPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirReflectKnockBackBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirReflectKnockBackVelocityZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EnergyBurstAttractStZMaxMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EnergyBurstAttractStRiseTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EnergyBurstAttractXYMaxMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EnergyBurstAttractZMaxMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EnergyBurstAttractXYMoveMinRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EnergyBurstAttractXYMoveMaxRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EnergyBurstAttractZMoveMaxRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EnergyBurstAttractHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EnergyBurstAttractAirHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_EnergyBurstAttractStZMoveSpeedRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_EnergyBurstAttractXYMoveSpeedRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_EnergyBurstAttractZMoveSpeedRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EnergyBurstAttractBlowPowerScaleAddMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EnergyBurstAttractBlowPowerScaleAddMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AddReactionDisableTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_SwirlUpEffData;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_AIAttrResistLow;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_AIAttrResistNormal;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_AIAttrResistHigh;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_AIAttrResistInvalid;
    
    UTresEnemyCommonParam();
};


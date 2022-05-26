#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_EnemyShipBase.h"
#include "ETresProjectileHomingType.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_EnemyShipBase_ShadowMissile.generated.h"

class UCurveFloat;

UCLASS(Abstract)
class ATresProjectile_EnemyShipBase_ShadowMissile : public ATresProjectile_EnemyShipBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_CenterSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CenterSpeedMin;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_MinCenterSpeedRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CenterTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndTimeMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OuOfViewportSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OuOfViewportSpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_AngleCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CenterSpeedByAngleMin;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_DampCurveApplyTime;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    ETresProjectileHomingType m_HomingType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingTurnMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingTurnAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxTurnMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingTurnMaxByAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingTurnAccelByAngle;
    
public:
    ATresProjectile_EnemyShipBase_ShadowMissile();
};


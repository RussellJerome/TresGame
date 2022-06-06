#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex367_SwordWaveProjectileBase.generated.h"

class AActor;

UCLASS()
class ATresEnemy_e_ex367_SwordWaveProjectileBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectedLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectedSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectedDownSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectedSpeedMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProximityModeSetDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProximityModeLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProximityModeInitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProximityModeDownSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProximityModeSpeedMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpinSpeed;
    
private:
    UPROPERTY()
    AActor* m_Target;
    
public:
    ATresEnemy_e_ex367_SwordWaveProjectileBase();
};


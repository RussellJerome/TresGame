#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProj_LaserLineTrace.generated.h"

UCLASS()
class ATresProj_LaserLineTrace : public ATresProjectileBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresOnShutDown);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresOnLaserTerminate);
    
private:
    UPROPERTY(EditDefaultsOnly)
    float m_fLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsLifeOverWhenArrivedLaserTerminate;
    
public:
    ATresProj_LaserLineTrace();
private:
    UFUNCTION()
    void _OnShutdownFromLaser();
    
};


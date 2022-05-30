#pragma once
#include "CoreMinimal.h"
#include "TresProj_MagicBase.h"
#include "TresProjectile_n_ex033_LaserRainCore.generated.h"

UCLASS(Abstract)
class ATresProjectile_n_ex033_LaserRainCore : public ATresProj_MagicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_nShotMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fShotWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fShotWaitShortTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nDistanceMax;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nRotMax;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bLandPut: 1;
    
public:
    ATresProjectile_n_ex033_LaserRainCore();
};


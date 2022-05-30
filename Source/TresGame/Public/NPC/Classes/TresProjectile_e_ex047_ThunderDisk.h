#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex047_ThunderDisk.generated.h"

UCLASS()
class ATresProjectile_e_ex047_ThunderDisk : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_RotationSpeedMin;
    
    UPROPERTY(EditAnywhere)
    float m_RotationSpeedMax;
    
    UPROPERTY(EditAnywhere)
    float m_MoveSpeedMin;
    
    UPROPERTY(EditAnywhere)
    float m_MoveSpeedMax;
    
    UPROPERTY(EditAnywhere)
    bool m_IsAroundWait;
    
    UPROPERTY(EditAnywhere)
    float m_HorminStartWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_HomingFinishDist;
    
    UPROPERTY(EditAnywhere)
    float m_HomingMaxAngle;
    
    UPROPERTY(EditAnywhere)
    float m_HomingTurnMax;
    
    ATresProjectile_e_ex047_ThunderDisk();
};


#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex301_CalamityThdProjectileBase.generated.h"

UCLASS(HideDropdown)
class ATresEnemy_e_ex301_CalamityThdProjectileBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_WaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_ScaleXMin;
    
    UPROPERTY(EditAnywhere)
    float m_ScaleX;
    
    UPROPERTY(EditAnywhere)
    float m_ScaleSpeedX;
    
    UPROPERTY(EditAnywhere)
    float m_ScaleSpeedZ;
    
    UPROPERTY(EditAnywhere)
    float m_ScaleAddSpeedZ;
    
    UPROPERTY(EditAnywhere)
    float m_ScaleSpeedMax;
    
    UPROPERTY(EditAnywhere)
    float m_ScaleZMin;
    
    UPROPERTY(EditAnywhere)
    float m_ScaleZ;
    
    ATresEnemy_e_ex301_CalamityThdProjectileBase();
};


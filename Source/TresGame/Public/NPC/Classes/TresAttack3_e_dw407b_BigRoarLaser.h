#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_dw407b_BigRoarLaser.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_dw407b_BigRoarLaser : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_BigRoarLasarLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitialSpawnProjectileTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PillarLightWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SplineMoveWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VariabilityMinTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VariabilityMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Acceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_DecelerationStartParcentage;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_LoopEndStartParcentage;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Deceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinSpeed;
    
public:
    UTresAttack3_e_dw407b_BigRoarLaser();
};


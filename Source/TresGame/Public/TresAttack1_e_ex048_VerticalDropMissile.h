#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex048_VerticalDropMissile.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex048_VerticalDropMissile : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_InitProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AccelProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RisePitchRotate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileHorizontalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileHorizontalDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileMaxHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallPitchRotate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileHomigMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileHomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnMarkerDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeginChangeColorHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishChangeColorHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeginBlinkHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BlinkStrength;
    
public:
    UTresAttack1_e_ex048_VerticalDropMissile();
};


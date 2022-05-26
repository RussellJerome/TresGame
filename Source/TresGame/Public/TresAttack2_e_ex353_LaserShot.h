#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex353_Base.h"
#include "TresAttack2_e_ex353_LaserShot.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex353_LaserShot : public UTresAttack_e_ex353_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bModifyViewPos: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDisableLockon: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_LaserShotProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartDecelTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DecelSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FireEffectSpawnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileFireDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartWarpOutAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
    UTresAttack2_e_ex353_LaserShot();
};


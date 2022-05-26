#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresRoarSpawnProjectileParam_e_dw407b.h"
#include "TresAttack1_e_dw407b_Roar.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_dw407b_Roar : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_InitialSpawnProjectileTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FarSpawnProjectileDistace;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NearProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NearSpawnProjectileTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NearSpawnProjectileInterval;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NearSpawnProjectileSameTimeNum;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsNearTargetDarkSide: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NearSpawnProjectileMinRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NearSpawnProjectileMaxRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NearSpawnProjectileAimTargetRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NearSpawnProjectileAimTargetTimingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NearSpawnProjectileMinHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NearSpawnProjectileMaxHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FarProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FarSpawnProjectileTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FarSpawnProjectileInterval;
    
    UPROPERTY(EditDefaultsOnly)
    FTresRoarSpawnProjectileParam_e_dw407b m_FarSpawnProjectileParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FarSpawnProjectileAimTargetDirectionTimingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FarSpawnProjectileMinHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FarSpawnProjectileMaxHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CacheSpawnLocationTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileDistance;
    
public:
    UTresAttack1_e_dw407b_Roar();
};


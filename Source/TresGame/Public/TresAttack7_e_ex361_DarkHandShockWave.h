#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresEnemyEx361ProjectileSpawnInfo.h"
#include "TresAttack7_e_ex361_DarkHandShockWave.generated.h"

UCLASS(HideDropdown)
class UTresAttack7_e_ex361_DarkHandShockWave : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx361ProjectileSpawnInfo> m_ProjectileSpawnInfo;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShockWaveMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShockWaveMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WarpOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FallSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WarpDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FallMoveRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WarpDist;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsKai: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsSecondDarkAuraShockWave: 1;
    
public:
    UTresAttack7_e_ex361_DarkHandShockWave();
};


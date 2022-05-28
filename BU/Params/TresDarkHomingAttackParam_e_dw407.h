#pragma once
#include "CoreMinimal.h"
#include "TresDarkHomingProjectileNumParams_e_dw407.h"
#include "TresDarkHomingProjectileParam_e_dw407.h"
#include "TresDarkHomingAttackParam_e_dw407.generated.h"

USTRUCT(BlueprintType)
struct FTresDarkHomingAttackParam_e_dw407 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_TimeUntilSpawnProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresDarkHomingProjectileNumParams_e_dw407> m_SpawnProjectileParams;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Pitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GameLevelMinSpawnProjectileInterval[4];
    
    UPROPERTY(EditDefaultsOnly)
    float m_GameLevelMaxSpawnProjectileInterval[4];
    
    UPROPERTY(EditDefaultsOnly)
    float m_TimeUntilReStart;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EnableBackwardParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GameLevelMinProjectileSpeed[4];
    
    UPROPERTY(EditDefaultsOnly)
    float m_GameLevelMaxProjectileSpeed[4];
    
    UPROPERTY(EditDefaultsOnly)
    FTresDarkHomingProjectileParam_e_dw407 m_ForwardProjectileParams;
    
    UPROPERTY(EditDefaultsOnly)
    FTresDarkHomingProjectileParam_e_dw407 m_BackwardProjectileParams;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngle;
    
    TRESGAME_API FTresDarkHomingAttackParam_e_dw407();
};


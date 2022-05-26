#pragma once
#include "CoreMinimal.h"
#include "ProjectileSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FProjectileSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_SocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxShotCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileVariance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinProjectileDiameter;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxProjectileDiameter;
    
    TRESGAME_API FProjectileSpawnInfo();
};


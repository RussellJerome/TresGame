#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MagmaTornadoSpawnerInfo.generated.h"

USTRUCT()
struct FMagmaTornadoSpawnerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_vSpawnOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingRotVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingMinDistance2D;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingMaxYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileSpawnWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileSpawnDepth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileSpawnInterval;
    
    TRESGAME_API FMagmaTornadoSpawnerInfo();
};


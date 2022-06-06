#pragma once
#include "CoreMinimal.h"
#include "ETresDropItemID.h"
#include "CAMovableBarrelParam.generated.h"

USTRUCT(BlueprintType)
struct FCAMovableBarrelParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresDropItemID m_prizeKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_directionChangeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_turnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_turnRateOnHitWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_turnRateTimeOnHitWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_moveRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_defaultVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_maxDeltaAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_MaxHitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_spawnPrizeNumForDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_spawnPrizeNumForNormalAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_spawnPrizeNumPerDamageInAttraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_prizeSpawnUpDirectionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_naviMeshExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_bodyCollMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_minSpeedScaleOnAvoidPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_declVelocityRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_yawMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bRunningAwayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseNaviMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bStopMovement;
    
    TRESGAME_API FCAMovableBarrelParam();
};


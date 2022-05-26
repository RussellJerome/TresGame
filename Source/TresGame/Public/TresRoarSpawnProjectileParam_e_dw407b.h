#pragma once
#include "CoreMinimal.h"
#include "TresRoarSpawnProjectileParam_e_dw407b.generated.h"

USTRUCT(BlueprintType)
struct FTresRoarSpawnProjectileParam_e_dw407b {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnProjectileSameTimeNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimTargetDirectionMinDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimTargetDirectionMaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimTargetDirectionAngle;
    
    TRESGAME_API FTresRoarSpawnProjectileParam_e_dw407b();
};


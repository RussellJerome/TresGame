#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyShipCoreSpawnData.h"
#include "UObject/NoExportTypes.h"
#include "ca405MaelstromSpawnParameter.generated.h"

USTRUCT(BlueprintType)
struct Fca405MaelstromSpawnParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatInterval m_YawRange;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_YawLimitRange;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_RadiusRange;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_DepthRange;
    
    UPROPERTY(EditAnywhere)
    FRotator m_RotationOffset;
    
    UPROPERTY(EditAnywhere)
    float m_RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyShipCoreSpawnData> m_CoreParamArray;
    
    UPROPERTY(EditDefaultsOnly)
    FInt32Interval m_SpawnCoreNumRange;
    
    UPROPERTY(EditAnywhere)
    int32 m_SelectWeight;
    
    UPROPERTY(EditAnywhere)
    int32 m_DamageAmount;
    
    TRESGAME_API Fca405MaelstromSpawnParameter();
};


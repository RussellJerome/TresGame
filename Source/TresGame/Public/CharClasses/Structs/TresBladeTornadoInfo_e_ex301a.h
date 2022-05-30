#pragma once
#include "CoreMinimal.h"
#include "TresBladeTornadoInfo_e_ex301a.generated.h"

USTRUCT(BlueprintType)
struct FTresBladeTornadoInfo_e_ex301a {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Interval;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearExcludeAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnExcludeAngleYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnAngleYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnAngleMaxPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnAngleMinPitch;
    
    UPROPERTY(EditDefaultsOnly)
    int32 AimNum;
    
    UPROPERTY(EditDefaultsOnly)
    float MinMissDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxMissDistance;
    
    TRESGAME_API FTresBladeTornadoInfo_e_ex301a();
};


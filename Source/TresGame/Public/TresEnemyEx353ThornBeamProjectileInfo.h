#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyEx353ThornBeamProjectileInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx353ThornBeamProjectileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float FireDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float InitialSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AccelSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingAbsTime;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingAccelSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingMaxSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingAccelSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingMaxSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator ShotDirection;
    
    UPROPERTY(EditDefaultsOnly)
    float MissMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float MissMaxDist;
    
    UPROPERTY(EditDefaultsOnly)
    float MissMinHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float MissMaxHeight;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsSetAngle: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float MissMinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float MissMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsDecelSpeed: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float DecelStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float DecelSpeed;
    
    TRESGAME_API FTresEnemyEx353ThornBeamProjectileInfo();
};


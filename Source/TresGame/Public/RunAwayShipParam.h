#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RunAwayShipParam.generated.h"

USTRUCT(BlueprintType)
struct FRunAwayShipParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_defaultVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxYawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_turnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_minSafeAreaYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_maxSafeAreaYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_minShotYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_maxShotYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_minShotDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_maxShotDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_shotRandamLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_shotRandamDistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_shotRandamMoveDirectionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_shotInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_minShotPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_maxShotPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_maxShotPitchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_numProjectilePerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_offsetVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bStopMovement: 1;
    
    TRESGAME_API FRunAwayShipParam();
};


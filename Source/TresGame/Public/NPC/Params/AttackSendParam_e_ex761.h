#pragma once
#include "CoreMinimal.h"
#include "AttackSendParam_e_ex761.generated.h"

USTRUCT(BlueprintType)
struct FAttackSendParam_e_ex761 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float StartDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float StartHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float StartAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float StartMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float StartOffsetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingMoveRate;
    
    UPROPERTY(EditDefaultsOnly)
    float LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float InitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float Acceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingTargetOffsetRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingEndDistance;
    
    TRESGAME_API FAttackSendParam_e_ex761();
};


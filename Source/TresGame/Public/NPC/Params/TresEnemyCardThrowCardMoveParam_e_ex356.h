#pragma once
#include "CoreMinimal.h"
#include "TresEnemyCardThrowCardMoveParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyCardThrowCardMoveParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float ThrowAngleYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float ThrowAnglePitch;
    
    UPROPERTY(EditDefaultsOnly)
    float InitialSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float Accel;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AccelStartDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 EnableHomingPitch: 1;
    
    TRESGAME_API FTresEnemyCardThrowCardMoveParam_e_ex356();
};


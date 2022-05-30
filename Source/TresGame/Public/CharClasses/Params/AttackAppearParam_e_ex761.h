#pragma once
#include "CoreMinimal.h"
#include "AttackAppearParam_e_ex761.generated.h"

USTRUCT(BlueprintType)
struct FAttackAppearParam_e_ex761 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float IntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float Angle;
    
    UPROPERTY(EditDefaultsOnly)
    float Distance;
    
    UPROPERTY(EditDefaultsOnly)
    float Height;
    
    UPROPERTY(EditDefaultsOnly)
    float OffsetYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float OffsetPitch;
    
    TRESGAME_API FAttackAppearParam_e_ex761();
};


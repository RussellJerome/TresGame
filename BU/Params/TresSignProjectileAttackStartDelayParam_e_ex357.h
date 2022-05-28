#pragma once
#include "CoreMinimal.h"
#include "TresSignProjectileAttackStartDelayParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FTresSignProjectileAttackStartDelayParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName AttackCollisionGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    float AttackStartDelayTime;
    
    TRESGAME_API FTresSignProjectileAttackStartDelayParam_e_ex357();
};


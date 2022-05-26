#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEnvQueryBindParamFloat_ex358.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEnvQueryBindParamFloat_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName BindName;
    
    UPROPERTY(EditDefaultsOnly)
    float Value;
    
    TRESGAME_API FTresEnemyEnvQueryBindParamFloat_ex358();
};


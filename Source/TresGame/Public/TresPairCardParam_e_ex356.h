#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyPressCardAttribute_e_ex356.h"
#include "TresPairCardParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresPairCardParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float IntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float PressStartTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float AttackStartDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyPressCardAttribute_e_ex356::Type> AttributeType;
    
    TRESGAME_API FTresPairCardParam_e_ex356();
};


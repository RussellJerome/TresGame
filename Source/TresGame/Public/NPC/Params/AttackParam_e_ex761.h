#pragma once
#include "CoreMinimal.h"
#include "AttackAppearParam_e_ex761.h"
#include "AttackSendParam_e_ex761.h"
#include "AttackParam_e_ex761.generated.h"

USTRUCT(BlueprintType)
struct FAttackParam_e_ex761 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAttackAppearParam_e_ex761 AppearParam;
    
    UPROPERTY(EditDefaultsOnly)
    FAttackSendParam_e_ex761 SendParam;
    
    TRESGAME_API FAttackParam_e_ex761();
};


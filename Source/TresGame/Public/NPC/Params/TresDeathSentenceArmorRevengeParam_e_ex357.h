#pragma once
#include "CoreMinimal.h"
#include "TresDeathSentenceArmorRevengeParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FTresDeathSentenceArmorRevengeParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName BaseParamID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 RevengeStartArmorDamage;
    
    TRESGAME_API FTresDeathSentenceArmorRevengeParam_e_ex357();
};


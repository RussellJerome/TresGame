#pragma once
#include "CoreMinimal.h"
#include "OneCollInfo_e_ex310.h"
#include "WaveOneCollInfo_e_ex310.generated.h"

USTRUCT(BlueprintType)
struct FWaveOneCollInfo_e_ex310 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FOneCollInfo_e_ex310> OneCollInfoArray;
    
    TRESGAME_API FWaveOneCollInfo_e_ex310();
};


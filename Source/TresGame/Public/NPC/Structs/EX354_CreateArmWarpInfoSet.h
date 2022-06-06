#pragma once
#include "CoreMinimal.h"
#include "EX354_CreateArmWarpInfo.h"
#include "EX354_CreateArmWarpInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FEX354_CreateArmWarpInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEX354_CreateArmWarpInfo m_ArmWarpInfoArray[2];
    
    TRESGAME_API FEX354_CreateArmWarpInfoSet();
};


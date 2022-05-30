#pragma once
#include "CoreMinimal.h"
#include "EX354_RunShotTimeInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX354_RunShotTimeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fShotTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bRight;
    
    TRESGAME_API FEX354_RunShotTimeInfo();
};


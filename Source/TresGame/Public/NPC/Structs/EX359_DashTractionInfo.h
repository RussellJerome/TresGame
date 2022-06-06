#pragma once
#include "CoreMinimal.h"
#include "EX359_DashTractionInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_DashTractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fDashGoalToTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fMaxTractionDistance;
    
    TRESGAME_API FEX359_DashTractionInfo();
};


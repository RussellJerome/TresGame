#pragma once
#include "CoreMinimal.h"
#include "EX355_AccelTractionInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_AccelTractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fVerticalTractionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fMaxVerticalTractionDistance;
    
    TRESGAME_API FEX355_AccelTractionInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EX355_ComboTractionInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_ComboTractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector vTractionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fMaxTractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fMinTractionDistance;
    
    TRESGAME_API FEX355_ComboTractionInfo();
};


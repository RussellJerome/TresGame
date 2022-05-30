#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EX355_CutDownTractionInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_CutDownTractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector vTractionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fMaxHorizontalTractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float fMaxVerticalTractionDistance;
    
    UPROPERTY()
    bool bMaxVerticalTractionDistance;
    
    TRESGAME_API FEX355_CutDownTractionInfo();
};


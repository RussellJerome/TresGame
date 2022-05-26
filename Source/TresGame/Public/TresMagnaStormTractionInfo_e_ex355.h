#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresMagnaStormTractionInfo_e_ex355.generated.h"

USTRUCT(BlueprintType)
struct FTresMagnaStormTractionInfo_e_ex355 {
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
    
    TRESGAME_API FTresMagnaStormTractionInfo_e_ex355();
};


#pragma once
#include "CoreMinimal.h"
#include "EX355_RushAwayTractionInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_RushAwayTractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fFinalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bUsePawnDir;
    
    TRESGAME_API FEX355_RushAwayTractionInfo();
};


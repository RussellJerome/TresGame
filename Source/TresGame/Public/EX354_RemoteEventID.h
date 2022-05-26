#pragma once
#include "CoreMinimal.h"
#include "EX354_RemoteEventID.generated.h"

USTRUCT(BlueprintType)
struct FEX354_RemoteEventID {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_RemoteEventName;
    
    TRESGAME_API FEX354_RemoteEventID();
};


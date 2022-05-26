#pragma once
#include "CoreMinimal.h"
#include "EX359_RemoteEventID.generated.h"

USTRUCT(BlueprintType)
struct FEX359_RemoteEventID {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_RemoteEventName;
    
    TRESGAME_API FEX359_RemoteEventID();
};


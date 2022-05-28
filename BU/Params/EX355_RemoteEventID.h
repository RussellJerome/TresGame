#pragma once
#include "CoreMinimal.h"
#include "EX355_RemoteEventID.generated.h"

USTRUCT(BlueprintType)
struct FEX355_RemoteEventID {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_RemoteEventName;
    
    TRESGAME_API FEX355_RemoteEventID();
};


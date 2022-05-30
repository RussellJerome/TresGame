#pragma once
#include "CoreMinimal.h"
#include "TresNavLinkExtendedInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresNavLinkExtendedInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ElementSize;
    
    UPROPERTY()
    uint32 Version;
    
    UPROPERTY()
    TArray<uint8> Data;
    
    TRESGAME_API FTresNavLinkExtendedInfo();
};


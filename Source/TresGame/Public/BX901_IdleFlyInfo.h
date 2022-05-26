#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BX901_IdleFlyInfo.generated.h"

USTRUCT(BlueprintType)
struct FBX901_IdleFlyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_vOffsetMin;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vOffsetMax;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vOffsetPeriod;
    
    TRESGAME_API FBX901_IdleFlyInfo();
};


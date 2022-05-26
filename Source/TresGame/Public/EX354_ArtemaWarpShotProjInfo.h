#pragma once
#include "CoreMinimal.h"
#include "EX354_ArtemaWarpShotProjInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotProjInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fShotWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fTargetPastDestroyDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fCenterPastDestroyDistance;
    
    TRESGAME_API FEX354_ArtemaWarpShotProjInfo();
};


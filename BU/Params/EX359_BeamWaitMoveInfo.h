#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamWaitMoveInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_BeamWaitMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bNotEndOnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUpdateMoveDir;
    
    TRESGAME_API FEX359_BeamWaitMoveInfo();
};


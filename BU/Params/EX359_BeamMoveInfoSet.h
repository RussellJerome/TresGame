#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamWaitMoveInfo.h"
#include "EX359_BeamSpinMoveInfo.h"
#include "EX359_BeamHomingMoveInfo.h"
#include "EX359_BeamMoveInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FEX359_BeamMoveInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEX359_BeamWaitMoveInfo m_WaitMoveInfo;
    
    UPROPERTY()
    bool m_bMoveWait;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_BeamSpinMoveInfo m_SpinMoveInfo;
    
    UPROPERTY()
    bool m_bSpinMove;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_BeamHomingMoveInfo m_HomingMoveInfo;
    
    TRESGAME_API FEX359_BeamMoveInfoSet();
};


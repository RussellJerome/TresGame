#pragma once
#include "CoreMinimal.h"
#include "EX355_ThrowRoamMoveInfo.h"
#include "EX355_ThrowFirstMoveInfo.h"
#include "EX355_ThrowHomingInfo.h"
#include "EX355_ThrowInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FEX355_ThrowInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEX355_ThrowRoamMoveInfo m_RoamMoveInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FEX355_ThrowFirstMoveInfo m_FirstMoveInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FEX355_ThrowHomingInfo m_HomingInfo;
    
    TRESGAME_API FEX355_ThrowInfoSet();
};


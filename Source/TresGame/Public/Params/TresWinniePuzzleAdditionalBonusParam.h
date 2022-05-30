#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleAdditionalBonusParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleAdditionalBonusParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 SingleInvocationScore;
    
    UPROPERTY(EditDefaultsOnly)
    int32 AdditionalInvocationScore;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SingleInvocationAdditionalScore;
    
    UPROPERTY(EditDefaultsOnly)
    int32 AdditionalInvocationAdditionalScore;
    
    TRESGAME_API FTresWinniePuzzleAdditionalBonusParam();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresE_EX367_DarkShootingPatternParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_EX367_DarkShootingPatternParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_ShotWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_Offset;
    
    TRESGAME_API FTresE_EX367_DarkShootingPatternParam();
};


#pragma once
#include "CoreMinimal.h"
#include "TresChaosFiragaShotInterval_e_ex352.generated.h"

USTRUCT(BlueprintType)
struct FTresChaosFiragaShotInterval_e_ex352 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_Interval;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bHomingEnabled;
    
    TRESGAME_API FTresChaosFiragaShotInterval_e_ex352();
};


#pragma once
#include "CoreMinimal.h"
#include "EX359_ThrowEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_ThrowEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fNotifyTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetToTimeOnHit;
    
    TRESGAME_API FEX359_ThrowEffectInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "TresComNpcActRandomValue.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcActRandomValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fBase;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Random;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fScale;
    
    TRESGAME_API FTresComNpcActRandomValue();
};


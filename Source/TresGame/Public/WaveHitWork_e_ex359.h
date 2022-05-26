#pragma once
#include "CoreMinimal.h"
#include "WaveHitWork_e_ex359.generated.h"

class ATresCharPawnBase;

USTRUCT()
struct FWaveHitWork_e_ex359 {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresCharPawnBase* pOwner;
    
    TRESGAME_API FWaveHitWork_e_ex359();
};


#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstEffectAreaTime.generated.h"

UCLASS()
class UTresInterpTrackInstEffectAreaTime : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float ResetFloat;
    
    UTresInterpTrackInstEffectAreaTime();
};


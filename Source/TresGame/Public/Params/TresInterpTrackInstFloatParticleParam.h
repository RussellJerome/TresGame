#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstFloatParticleParam.generated.h"

UCLASS()
class UTresInterpTrackInstFloatParticleParam : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float ResetFloat;
    
    UPROPERTY()
    int32 GroupID;
    
    UTresInterpTrackInstFloatParticleParam();
};


#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackFloatParticleParam.generated.h"

UCLASS(CollapseCategories)
class UTresInterpTrackFloatParticleParam : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    int32 GroupID;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllSetParameter: 1;
    
    UTresInterpTrackFloatParticleParam();
};


#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackVectorBase.h"
#include "TresInterpTrackVectorParticleParam.generated.h"

UCLASS(CollapseCategories)
class UTresInterpTrackVectorParticleParam : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    int32 GroupID;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllSetParameter: 1;
    
    UTresInterpTrackVectorParticleParam();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstVectorParticleParam.generated.h"

UCLASS()
class UTresInterpTrackInstVectorParticleParam : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector ResetVector;
    
    UPROPERTY()
    int32 GroupID;
    
    UTresInterpTrackInstVectorParticleParam();
};


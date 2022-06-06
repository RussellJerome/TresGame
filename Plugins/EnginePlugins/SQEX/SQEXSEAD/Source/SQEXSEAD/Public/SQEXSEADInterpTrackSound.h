#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackSound.h"
#include "SQEXSEADInterpTrackSound.generated.h"

UCLASS(CollapseCategories)
class SQEXSEAD_API USQEXSEADInterpTrackSound : public UInterpTrackSound {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bTreatAsNonWorldSound: 1;
    
    USQEXSEADInterpTrackSound();
};


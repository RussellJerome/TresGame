#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInstProperty.h"
#include "SQEXSEADInterpTrackInstCategoryVolumeFade.generated.h"

UCLASS()
class SQEXSEAD_API USQEXSEADInterpTrackInstCategoryVolumeFade : public UInterpTrackInstProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    float ResetVolume;
    
    USQEXSEADInterpTrackInstCategoryVolumeFade();
};


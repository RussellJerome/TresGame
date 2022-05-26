#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInstProperty.h"
#include "SQEXSEADInterpTrackInstExternalParameter.generated.h"

UCLASS()
class SQEXSEAD_API USQEXSEADInterpTrackInstExternalParameter : public UInterpTrackInstProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    float ResetValue;
    
    USQEXSEADInterpTrackInstExternalParameter();
};


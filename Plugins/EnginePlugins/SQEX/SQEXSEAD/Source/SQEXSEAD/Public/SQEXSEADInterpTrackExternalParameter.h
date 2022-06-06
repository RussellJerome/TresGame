#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "SQEXSEADInterpTrackExternalParameter.generated.h"

UCLASS(CollapseCategories)
class SQEXSEAD_API USQEXSEADInterpTrackExternalParameter : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ExternalParameterName;
    
    UPROPERTY(EditAnywhere)
    float OnMatineeEndSetParameterValue;
    
    USQEXSEADInterpTrackExternalParameter();
};


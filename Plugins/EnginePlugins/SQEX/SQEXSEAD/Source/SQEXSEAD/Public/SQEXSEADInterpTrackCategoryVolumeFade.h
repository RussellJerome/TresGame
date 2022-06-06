#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "SQEXSEADInterpTrackCategoryVolumeFade.generated.h"

UCLASS(CollapseCategories)
class SQEXSEAD_API USQEXSEADInterpTrackCategoryVolumeFade : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CategoryName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ExtendCategoryNames;
    
    UPROPERTY(EditAnywhere)
    float OnMatineeEndSetCategoryVolume;
    
    USQEXSEADInterpTrackCategoryVolumeFade();
};


#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "SQEXSEADBGMControlTrackKey.h"
#include "SQEXSEADInterpTrackBGMControl.generated.h"

class USoundBase;

UCLASS(CollapseCategories)
class SQEXSEAD_API USQEXSEADInterpTrackBGMControl : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FSQEXSEADBGMControlTrackKey> Keys;
    
    UPROPERTY(EditAnywhere)
    USoundBase* BGMAssetPtr;
    
    USQEXSEADInterpTrackBGMControl();
};


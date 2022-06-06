#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "SQEXSEADInterpTrackInstBGMControl.generated.h"

UCLASS()
class SQEXSEAD_API USQEXSEADInterpTrackInstBGMControl : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float LastUpdatePosition;
    
    USQEXSEADInterpTrackInstBGMControl();
};


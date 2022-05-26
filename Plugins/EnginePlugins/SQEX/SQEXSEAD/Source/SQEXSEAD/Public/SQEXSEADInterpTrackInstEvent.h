#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "SQEXSEADInterpTrackInstEvent.generated.h"

UCLASS()
class SQEXSEAD_API USQEXSEADInterpTrackInstEvent : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float LastUpdatePosition;
    
    USQEXSEADInterpTrackInstEvent();
};


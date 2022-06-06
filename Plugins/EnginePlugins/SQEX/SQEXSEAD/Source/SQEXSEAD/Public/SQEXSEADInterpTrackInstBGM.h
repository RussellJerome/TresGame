#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInstSound.h"
#include "SQEXSEADInterpTrackInstBGM.generated.h"

class USoundBase;

UCLASS()
class SQEXSEAD_API USQEXSEADInterpTrackInstBGM : public UInterpTrackInstSound {
    GENERATED_BODY()
public:
    UPROPERTY()
    USoundBase* PlayedSound;
    
    USQEXSEADInterpTrackInstBGM();
};


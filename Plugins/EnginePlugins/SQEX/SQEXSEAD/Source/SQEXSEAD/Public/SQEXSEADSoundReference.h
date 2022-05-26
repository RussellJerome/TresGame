#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADSoundReference.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADSoundReference {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(EditAnywhere)
    FName AttachPointName;
    
    FSQEXSEADSoundReference();
};


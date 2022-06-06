#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADSoundReference.h"
#include "SQEXSEADSoundReferenceEnumSet.generated.h"

UCLASS()
class SQEXSEAD_API USQEXSEADSoundReferenceEnumSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSQEXSEADSoundReference> References;
    
    USQEXSEADSoundReferenceEnumSet();
};


#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SQEXSEADAnimNotify_ChangeAudioVolumeEnable.generated.h"

UCLASS(CollapseCategories)
class SQEXSEAD_API USQEXSEADAnimNotify_ChangeAudioVolumeEnable : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString AudioVolumeName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnable: 1;
    
    USQEXSEADAnimNotify_ChangeAudioVolumeEnable();
};


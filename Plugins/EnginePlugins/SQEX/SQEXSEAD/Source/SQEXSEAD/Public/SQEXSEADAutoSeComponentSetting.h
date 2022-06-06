#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADAutoSeComponentInitParams.h"
#include "SQEXSEADAutoSeComponentSetting.generated.h"

UCLASS()
class SQEXSEAD_API USQEXSEADAutoSeComponentSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSQEXSEADAutoSeComponentInitParams InitParams;
    
    USQEXSEADAutoSeComponentSetting();
};


#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SQEXSEADAnimNotifyPlayAutoSeParams.h"
#include "SQEXSEADAnimNotify_PlayAutoSe.generated.h"

UCLASS(CollapseCategories)
class SQEXSEAD_API USQEXSEADAnimNotify_PlayAutoSe : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSQEXSEADAnimNotifyPlayAutoSeParams PlaySettings;
    
    USQEXSEADAnimNotify_PlayAutoSe();
};


#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_AI_EnableActionAbortTimingNumber.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_AI_EnableActionAbortTimingNumber : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_Number;
    
public:
    UTresAnimNotify_AI_EnableActionAbortTimingNumber();
};


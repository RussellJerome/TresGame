#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_Timing.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_Timing : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_Param;
    
public:
    UTresAnimNotify_Timing();
};


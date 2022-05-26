#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_CommonTiming.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_CommonTiming : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_dParam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fParam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bParam;
    
public:
    UTresAnimNotify_CommonTiming();
};


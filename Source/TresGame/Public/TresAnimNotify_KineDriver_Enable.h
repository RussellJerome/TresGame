#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_KineDriver_Enable.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_KineDriver_Enable : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_Enable;
    
    UTresAnimNotify_KineDriver_Enable();
};


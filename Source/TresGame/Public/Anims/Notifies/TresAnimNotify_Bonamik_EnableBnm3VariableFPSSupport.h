#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_Bonamik_EnableBnm3VariableFPSSupport.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_Bonamik_EnableBnm3VariableFPSSupport : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_Enable;
    
    UTresAnimNotify_Bonamik_EnableBnm3VariableFPSSupport();
};


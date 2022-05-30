#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_Bonamik_EnablePresetWind.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_Bonamik_EnablePresetWind : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_Enable;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_PresetNames;
    
    UTresAnimNotify_Bonamik_EnablePresetWind();
};


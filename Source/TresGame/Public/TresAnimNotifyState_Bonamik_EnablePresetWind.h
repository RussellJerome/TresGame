#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_Bonamik_EnablePresetWind.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_Bonamik_EnablePresetWind : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_Enable;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_PresetNames;
    
    UTresAnimNotifyState_Bonamik_EnablePresetWind();
};


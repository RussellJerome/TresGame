#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_Bonamik_EnableBnm3VariableFPSSupport.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_Bonamik_EnableBnm3VariableFPSSupport : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_Enable;
    
    UPROPERTY(EditAnywhere)
    float m_BeginBlendTime;
    
    UPROPERTY(EditAnywhere)
    float m_EndBlendTime;
    
    UTresAnimNotifyState_Bonamik_EnableBnm3VariableFPSSupport();
};


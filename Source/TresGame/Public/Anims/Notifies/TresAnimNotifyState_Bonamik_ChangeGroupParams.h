#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SQEX_BonamikChangingParameter.h"
#include "TresAnimNotifyState_Bonamik_ChangeGroupParams.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_Bonamik_ChangeGroupParams : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSQEX_BonamikChangingParameter> m_GroupParams;
    
    UTresAnimNotifyState_Bonamik_ChangeGroupParams();
};


#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_Bonamik_Enable.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_Bonamik_Enable : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> m_Groups;
    
    UPROPERTY(EditAnywhere)
    bool m_On;
    
    UPROPERTY(EditAnywhere)
    bool m_PreserveLatestResult;
    
    UPROPERTY(EditAnywhere)
    float m_BeginBlendTime;
    
    UPROPERTY(EditAnywhere)
    float m_EndBlendTime;
    
    UTresAnimNotifyState_Bonamik_Enable();
};


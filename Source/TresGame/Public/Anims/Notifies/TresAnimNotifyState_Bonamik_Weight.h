#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_Bonamik_Weight.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_Bonamik_Weight : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> m_Groups;
    
    UPROPERTY(EditAnywhere)
    float m_BeginBonamikWeight;
    
    UPROPERTY(EditAnywhere)
    float m_BeginTime;
    
    UPROPERTY(EditAnywhere)
    float m_EndBonamikWeight;
    
    UPROPERTY(EditAnywhere)
    float m_EndTime;
    
    UPROPERTY(EditAnywhere)
    bool m_ResetWhenNonZeroWeight;
    
    UTresAnimNotifyState_Bonamik_Weight();
};


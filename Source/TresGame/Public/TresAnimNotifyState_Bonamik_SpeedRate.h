#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_Bonamik_SpeedRate.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_Bonamik_SpeedRate : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_BeginSpeedRate;
    
    UPROPERTY(EditAnywhere)
    float m_BeginBlendTime;
    
    UPROPERTY(EditAnywhere)
    bool m_RestoreOriginalSpeedRate;
    
    UPROPERTY(EditAnywhere)
    float m_EndSpeedRate;
    
    UPROPERTY(EditAnywhere)
    float m_EndBlendTime;
    
    UPROPERTY(EditAnywhere)
    bool m_ApplyToChildren;
    
    UTresAnimNotifyState_Bonamik_SpeedRate();
};


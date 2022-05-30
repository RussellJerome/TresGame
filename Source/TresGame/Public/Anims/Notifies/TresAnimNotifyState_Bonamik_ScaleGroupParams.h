#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_Bonamik_ScaleGroupParams.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_Bonamik_ScaleGroupParams : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> m_Groups;
    
    UPROPERTY(EditAnywhere)
    bool m_ChangeInnerCone;
    
    UPROPERTY(EditAnywhere)
    float m_InnerConeScale;
    
    UPROPERTY(EditAnywhere)
    bool m_ChangeOuterCone;
    
    UPROPERTY(EditAnywhere)
    float m_OuterConeScale;
    
    UPROPERTY(EditAnywhere)
    bool m_ChangeLocalForce;
    
    UPROPERTY(EditAnywhere)
    float m_LocalForceScale;
    
    UPROPERTY(EditAnywhere)
    bool m_ChangeWindScale;
    
    UPROPERTY(EditAnywhere)
    float m_GroupWindScale;
    
    UPROPERTY(EditAnywhere)
    bool m_ChangeMassScale;
    
    UPROPERTY(EditAnywhere)
    float m_GroupMassScale;
    
    UPROPERTY(EditAnywhere)
    bool m_ApplyToAttachments;
    
    UTresAnimNotifyState_Bonamik_ScaleGroupParams();
};


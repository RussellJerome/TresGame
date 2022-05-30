#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_Bonamik_ScaleGroupParams.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_Bonamik_ScaleGroupParams : public UAnimNotify {
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
    
    UTresAnimNotify_Bonamik_ScaleGroupParams();
};


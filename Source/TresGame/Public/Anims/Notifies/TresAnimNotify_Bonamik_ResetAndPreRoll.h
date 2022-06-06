#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_Bonamik_ResetAndPreRoll.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_Bonamik_ResetAndPreRoll : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_Reset;
    
    UPROPERTY(EditAnywhere)
    bool m_ResetPose;
    
    UPROPERTY(EditAnywhere)
    int32 m_PreRoll;
    
    UPROPERTY(EditAnywhere)
    int32 m_PreRollForAttachment;
    
    UTresAnimNotify_Bonamik_ResetAndPreRoll();
};


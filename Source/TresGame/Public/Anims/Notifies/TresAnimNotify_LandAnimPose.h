#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ETresLandAnimPose.h"
#include "TresAnimNotify_LandAnimPose.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_LandAnimPose : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresLandAnimPose> m_LandAnimPose;
    
public:
    UTresAnimNotify_LandAnimPose();
};


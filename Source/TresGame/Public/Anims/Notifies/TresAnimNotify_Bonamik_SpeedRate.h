#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_Bonamik_SpeedRate.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_Bonamik_SpeedRate : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_SpeedRate;
    
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UTresAnimNotify_Bonamik_SpeedRate();
};


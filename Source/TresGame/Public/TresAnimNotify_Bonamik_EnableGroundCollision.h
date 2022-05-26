#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_Bonamik_EnableGroundCollision.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_Bonamik_EnableGroundCollision : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_Enable;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> m_Groups;
    
    UTresAnimNotify_Bonamik_EnableGroundCollision();
};


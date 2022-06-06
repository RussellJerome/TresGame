#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_Bonamik_Enable.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_Bonamik_Enable : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> m_Groups;
    
    UPROPERTY(EditAnywhere)
    bool m_On;
    
    UPROPERTY(EditAnywhere)
    bool m_PreserveLatestResult;
    
    UPROPERTY(EditAnywhere)
    float m_BlendTime;
    
    UTresAnimNotify_Bonamik_Enable();
};


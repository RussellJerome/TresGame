#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_SetActorVisible.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_SetActorVisible : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bNewVisible;
    
public:
    UTresAnimNotify_SetActorVisible();
};


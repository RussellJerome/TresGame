#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_SetMeshVisible.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_SetMeshVisible : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bNewVisible;
    
public:
    UTresAnimNotify_SetMeshVisible();
};


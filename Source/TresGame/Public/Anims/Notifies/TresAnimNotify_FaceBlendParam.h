#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "UObject/NoExportTypes.h"
#include "TresAnimNotify_FaceBlendParam.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_FaceBlendParam : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_BlendParam;
    
public:
    UTresAnimNotify_FaceBlendParam();
};


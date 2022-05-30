#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackVectorMaterialParam.h"
#include "TresInterpTrackVectorMaterialParamAll.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackVectorMaterialParamAll : public UTresInterpTrackVectorMaterialParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> m_ComponentTags;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_IgnoreComponentTags;
    
    UPROPERTY(EditAnywhere)
    bool m_IncludeChildActors;
    
    UTresInterpTrackVectorMaterialParamAll();
};


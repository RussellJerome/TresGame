#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackFloatMaterialParam.h"
#include "TresInterpTrackFloatMaterialParamAll.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackFloatMaterialParamAll : public UTresInterpTrackFloatMaterialParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> m_ComponentTags;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_IgnoreComponentTags;
    
    UPROPERTY(EditAnywhere)
    bool m_IncludeChildActors;
    
    UTresInterpTrackFloatMaterialParamAll();
};


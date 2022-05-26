#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackDynamicShadowDistance.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackDynamicShadowDistance : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> m_ComponentTags;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_IgnoreComponentTags;
    
    UPROPERTY(EditAnywhere)
    bool m_IncludeChildActors;
    
    UPROPERTY(EditAnywhere)
    bool m_Restore;
    
    UTresInterpTrackDynamicShadowDistance();
};


#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackWindScaleOfAllBonamikWindActors.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackWindScaleOfAllBonamikWindActors : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> m_IgnoreComponentTags;
    
    UPROPERTY(EditAnywhere)
    bool m_Restore;
    
    UTresInterpTrackWindScaleOfAllBonamikWindActors();
};


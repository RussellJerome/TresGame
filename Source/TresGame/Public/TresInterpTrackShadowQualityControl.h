#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresInterpTrackShadowQualityControlKey.h"
#include "TresInterpTrackShadowQualityControl.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackShadowQualityControl : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresInterpTrackShadowQualityControlKey> m_Keys;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_ComponentTags;
    
    UTresInterpTrackShadowQualityControl();
};


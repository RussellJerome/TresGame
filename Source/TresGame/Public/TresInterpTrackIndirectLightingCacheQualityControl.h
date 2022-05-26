#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresInterpTrackIndirectLightingCacheQualityControlKey.h"
#include "TresInterpTrackIndirectLightingCacheQualityControl.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackIndirectLightingCacheQualityControl : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresInterpTrackIndirectLightingCacheQualityControlKey> m_Keys;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_ComponentTags;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_IgnoreComponentTags;
    
    UPROPERTY(EditAnywhere)
    bool m_IncludeChildActors;
    
    UPROPERTY(EditAnywhere)
    bool m_Restore;
    
    UTresInterpTrackIndirectLightingCacheQualityControl();
};


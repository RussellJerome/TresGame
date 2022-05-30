#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackShadowQualityControl.h"
#include "Matinee/InterpTrackInst.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ShadowQuality -FallbackName=ESQEX_ShadowQuality
#include "TresInterpTrackInstShadowQualityControl.generated.h"

class UPrimitiveComponent;

UCLASS()
class TRESGAME_API UTresInterpTrackInstShadowQualityControl : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<UPrimitiveComponent*> m_Components;
    
    UPROPERTY()
    TArray<TEnumAsByte<ESQEX_ShadowQuality>> m_SavedShadowQualityValues;
    
    UTresInterpTrackInstShadowQualityControl();
};


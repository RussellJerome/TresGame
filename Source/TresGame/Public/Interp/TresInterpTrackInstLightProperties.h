#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstLightProperties.generated.h"

class ULightComponent;
class UDirectionalLightComponent;

UCLASS()
class TRESGAME_API UTresInterpTrackInstLightProperties : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<ULightComponent*> m_LightComponents;
    
    UPROPERTY(Export)
    TArray<UDirectionalLightComponent*> m_DirectionalLightComponents;
    
    UTresInterpTrackInstLightProperties();
};


#pragma once
#include "CoreMinimal.h"
#include "ASValue.h"
#include "TresASProxy.h"
#include "TresASProxyTresControlsFloatTexture.generated.h"

UCLASS(NonTransient)
class UTresASProxyTresControlsFloatTexture : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FASValue> m_ComponentParameters;
    
    UPROPERTY()
    TArray<FASValue> m_FloatTextureCanvas;
    
    UPROPERTY()
    TArray<FASValue> m_FloatTextureBGs;
    
public:
    UTresASProxyTresControlsFloatTexture();
};


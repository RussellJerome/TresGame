#pragma once
#include "CoreMinimal.h"
#include "TresCameraBase.h"
#include "TresCameraDebug.generated.h"

class UDrawFrustumComponent;

UCLASS(NotPlaceable)
class ATresCameraDebug : public ATresCameraBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UDrawFrustumComponent* DrawFrustum;
    
public:
    ATresCameraDebug();
};


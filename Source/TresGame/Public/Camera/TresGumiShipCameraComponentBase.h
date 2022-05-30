#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "TresGumiShipCameraComponentBase.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipCameraComponentBase : public UCameraComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float m_fTestRadius;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float m_fDitherAlpha;
    
public:
    UTresGumiShipCameraComponentBase();
};


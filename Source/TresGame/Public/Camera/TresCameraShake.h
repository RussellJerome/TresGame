#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraShake.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShake -FallbackName=CameraShake
#include "TresCameraShake.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew)
class UTresCameraShake : public UCameraShake {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 m_bRealDeltaTime: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bSyncCameraActor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bSyncCameraNormal: 1;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_AttenuationDistanceCurve;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bAttenuationDistanceCurve: 1;
    
    UPROPERTY(EditAnywhere)
    float m_fAttenuationDistance;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bOwnerActorCheck: 1;
    
public:
    UTresCameraShake();
};


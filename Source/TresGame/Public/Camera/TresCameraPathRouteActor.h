#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraPathSplineActor.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraPathRouteActor.generated.h"

UCLASS(Placeable)
class ATresCameraPathRouteActor : public ATresCameraPathSplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_EffectiveRange;
    
    UPROPERTY(EditAnywhere)
    float m_BlendTime;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bJumpGroundLook: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDistanceOnlyArea: 1;
    
    UPROPERTY(EditAnywhere)
    float m_CameraDistance;
    
    UPROPERTY(EditAnywhere)
    FVector m_LookAtOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator m_RotMax;
    
    UPROPERTY(EditAnywhere)
    FRotator m_RotMin;
    
    ATresCameraPathRouteActor();
    UFUNCTION(BlueprintCallable)
    void EnableCameraPathRoute(bool bEnable, int32 Priority);
    
};


#pragma once
#include "CoreMinimal.h"
#include "ECameraLensType.h"
#include "TresCameraFirstPerson.h"
#include "UObject/NoExportTypes.h"
#include "HoldCameraParam.h"
#include "HoldCameraVoice.h"
#include "UObject/NoExportTypes.h"
#include "DetectMarkerCheckArea.h"
#include "Engine/Scene.h"
#include "TresCameraHoldCamera.generated.h"

class UTresScreenshotSaveController;
class UTresDetectMarkerComponentBase;
class AActor;
class UPrimitiveComponent;

UCLASS()
class ATresCameraHoldCamera : public ATresCameraFirstPerson {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHoldCameraParam> m_CameraParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_CameraRotationCenterOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECameraLensType DefaultLensType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float FisheyeDistortionEdgeSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float FisheyeDistortionPowerMax;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float FisheyeDistortionPowerMin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float FisheyeDistortionPowerDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoFocusBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InOutBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FStopChangeFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D FocusCenterOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bGumiShipCamera: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bDebugDraw: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bDebugDraw3DPosition: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bDebugTraceSimple: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SmartphoneUnblockTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EDepthOfFieldMethod> DOFMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CocDiameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CocDiameterNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlurScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFocalDistanceUnderOcean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFarDOFUnderOcean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFarTransitionRegionUnderOcean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinBlurSizeFarUnderOcean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraShakeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NearDOFMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FarDOFMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDetectMarkerCheckArea CheckArea_Finder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDetectMarkerCheckArea CheckArea_Selfie;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float CameraCollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> SelfiePoseList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SelfieMotion_BlendSpaceXMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SelfieMotion_BlendSpaceXMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHoldCameraVoice> StartVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHoldCameraVoice> TimeElapsedVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeElapsedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeElapsedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHoldCameraVoice> MarkerDetectedVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHoldCameraVoice> LuckyMarkShotVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHoldCameraVoice> LuckyMarkLastShotVoiceList;
    
private:
    UPROPERTY(DuplicateTransient, Transient)
    UTresScreenshotSaveController* m_pScreenshotSaveController;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UTresDetectMarkerComponentBase> m_pTargetMarker;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> m_IgnoreActors;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> m_IgnoreComponents;
    
public:
    ATresCameraHoldCamera();
};


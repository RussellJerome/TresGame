#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipPlayerBaseTrackingParameter.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipPlayerBaseTrackingParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fTrackingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTracking2DSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRailSlide2DSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTrackingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBetweenDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMostNearDistRatioForBoost;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTrackingRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCameraArmLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCameraPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFOV;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fNearClipPlane;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAdjustmentUD;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAdjustmentLR;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fParseAdjustmentUD;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fParseAdjustmentLR;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fModelParseAdjustmentUD;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fModelParseAdjustmentLR;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_vLimitOfMove;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_vRatioOfStartMoveCamera;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInterpSpeedOfCamera;
    
    TRESGAME_API FTresGumiShipPlayerBaseTrackingParameter();
};


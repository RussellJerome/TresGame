#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HoldCameraParam.generated.h"

USTRUCT(BlueprintType)
struct FHoldCameraParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_CameraLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_CameraLocalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LimitPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LimitPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_FovDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ZoomFovMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ZoomFovMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ZoomTotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CameraFStopMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CameraFStopMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CameraFStopDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_HeightOffsetMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_HeightOffsetMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RollMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RollMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bCalcDOF: 1;
    
    TRESGAME_API FHoldCameraParam();
};


#pragma once
#include "CoreMinimal.h"
#include "TresCameraDebug.h"
#include "TresCameraDebugOrthoTopView.generated.h"

UCLASS(Config=TresCameraDebugOrthoTopViewConfig)
class ATresCameraDebugOrthoTopView : public ATresCameraDebug {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    float m_OrthoWidth;
    
    UPROPERTY(Config)
    float m_OrthoYaw;
    
    UPROPERTY(Config)
    int32 m_OrthoMode;
    
    UPROPERTY(Config)
    float m_OrthoTall;
    
    UPROPERTY(Config, EditAnywhere)
    float m_OrthoWidthIncrement;
    
public:
    ATresCameraDebugOrthoTopView();
};


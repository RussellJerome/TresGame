#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HudCamera.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_HudCamera : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_gfx_hudCamera;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_shootNot;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamScreenAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamLensSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamLensSetPadBtnSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtCamLensSetPadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamLensSetIconAction;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamShootSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamShootSetPadBtnSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtCamShootSetPadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtCamShootSetNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtCamShootMaxNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamMode;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtCamModePadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcShare;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtSharePadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamBlurSlider;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamBlurSliderBar;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtCamBlurSliderLeftPadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtCamBlurSliderRightPadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamZoomSlider;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamZoomSliderBar;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtCamZoomSliderL2PadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtCamZoomSliderR2PadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamMarkCognition;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamMarkCognitionLucky;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamMarkCognitionMogu;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamMarkCognitionGummi;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamCameraFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamCameraFrameBlur;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamCameraFrameSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamHintFrameset;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamHintFramesetFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamHintFramesetFrameAlready;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamHintFramesetHintFrameLine9;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCamHintFramesetHintFrameLine;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_hudCameraMove;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_hudCameraMovePadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_hudCameraRoll;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_hudCameraRollPadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_hudCameraRollPadBtn2;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_hudCameraHoloBase;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_hudCameraReset;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_hudCameraResetPadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_hudCameraMovePadBtn2;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_hudCameraMovePadBtn3;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_hudCameraRollPadBtn3;
    
public:
    UTresUIP_HudCamera();
};


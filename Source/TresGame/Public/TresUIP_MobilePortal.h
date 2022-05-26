#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_MobilePortal.generated.h"

class UTresASProxyRSLBtnInfo;
class UGFxObject;
class UTresASProxyTresControlsImageIcon;
class UTresASProxyRSLStageCategory;
class UTresASProxyTresControlsIcon;
class UTresASProxyTresControlsButton;

UCLASS()
class UTresUIP_MobilePortal : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_MobilePortal;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_WorldTitleIcon;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_AppButtons[12];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsImageIcon* m_AppButtonImageIcons[12];
    
    UPROPERTY(Transient)
    UGFxObject* m_AppButtonCompleteMarks[12];
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_Jiminy;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_JiminyIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_AppScreen;
    
    UPROPERTY(Transient)
    UGFxObject* m_AppScreenColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_AppScreenIcon;
    
    UPROPERTY(Transient)
    UTresASProxyRSLBtnInfo* m_BtnInfo;
    
public:
    UTresUIP_MobilePortal();
};


#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MobilePortalApp.h"
#include "TresUIP_MobileLsi.generated.h"

class UTresASProxyTresControlsImageIcon;
class UGFxObject;
class UTresUIP_MobileLsiButton;

UCLASS()
class UTresUIP_MobileLsi : public UTresUIP_MobilePortalApp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Root;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpTextTitleText;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpTextDetailText;
    
    UPROPERTY(Transient)
    UGFxObject* m_Result;
    
    UPROPERTY(Transient)
    UGFxObject* m_ResultCategory1Text;
    
    UPROPERTY(Transient)
    UGFxObject* m_ResultCategory2Text;
    
    UPROPERTY(Transient)
    UGFxObject* m_ResultRankNum[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_ResultRankText[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_ResultTextMain[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_ResultTextSub[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_ResultUnitA[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_ResultUnitB[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_ResultUnitC[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_Cursor;
    
    UPROPERTY(Transient)
    UGFxObject* m_CursorGra0;
    
    UPROPERTY(Transient)
    UGFxObject* m_CursorGra1;
    
    UPROPERTY(Transient)
    UGFxObject* m_CursorBG;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsImageIcon* m_CursorCloseBGImageIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_CursorNewMark;
    
    UPROPERTY(Transient)
    UGFxObject* m_CursorCompleteMark;
    
    UPROPERTY(Transient)
    UGFxObject* m_ButtonRoot;
    
    UPROPERTY(Transient)
    UTresUIP_MobileLsiButton* m_Buttons[12];
    
    UPROPERTY(Transient)
    UGFxObject* m_ArrowL;
    
    UPROPERTY(Transient)
    UGFxObject* m_ArrowR;
    
    UPROPERTY(Transient)
    UGFxObject* m_Page;
    
public:
    UTresUIP_MobileLsi();
};


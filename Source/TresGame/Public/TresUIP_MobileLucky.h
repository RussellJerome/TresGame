#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MobilePortalApp.h"
#include "TresUIP_MobileLucky.generated.h"

class UGFxObject;
class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsIcon;

UCLASS()
class UTresUIP_MobileLucky : public UTresUIP_MobilePortalApp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_gfx_root;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_content1;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_content2;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_content3;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_header;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_helpText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_pHelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcC1BtnSet;
    
    UPROPERTY(Transient)
    TArray<UTresASProxyTresControlsIcon*> m_array_c1Icons;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcC2BtnSet;
    
    UPROPERTY(Transient)
    TArray<UTresASProxyTresControlsIcon*> m_array_c2Icons;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcC3Photo;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcC3PhotoPic;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_asproxyIcoC3PhotoPic;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcC3Left;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcC3Right;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txHeadWorld;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcHeadComp;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txHeadComp;
    
    UPROPERTY(Transient)
    TArray<UGFxObject*> m_gfx_HeadPins;
    
    UPROPERTY(Transient)
    TMap<uint32, UGFxObject*> m_gfx_C1Btns;
    
    UPROPERTY(Transient)
    TMap<uint32, UGFxObject*> m_gfx_C2Btns;
    
public:
    UTresUIP_MobileLucky();
};


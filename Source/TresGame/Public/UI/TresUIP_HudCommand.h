#pragma once
#include "CoreMinimal.h"
#include "TresCockpitCmdInfo.h"
#include "TresCockpitParts.h"
#include "TresCockpitShortcutCmdInfo.h"
#include "TresCockpitFriendInfo.h"
#include "TresUIP_HudCommand.generated.h"

class UGFxObject;
class UTresUICommandInfoCockpit;
class UTresUIHudCommandDataAsset;

UCLASS()
class UTresUIP_HudCommand : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FTresCockpitCmdInfo m_mainCmdInfoAry[4];
    
    UPROPERTY()
    FTresCockpitShortcutCmdInfo m_shortcutCmdInfoAry[3];
    
    UPROPERTY()
    FTresCockpitFriendInfo m_friendInfo;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActionCmdList[7];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActionCmdData[7];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActionCmdAct[7];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActionCmdText[7];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActionCmdCount[7];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActionCmdGgAnm[7];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActionCmdTime[7];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActionCmdTime2[7];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxMainCmdList[4];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxSubCmdList[9];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxSubCmdText[9];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxSubCmdName[9];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxSubCmdListNext;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxSubCmdListNextName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxUpdateMainCmd[2];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxShortcut[4];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxShortcutName[4];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActLogoGg[2];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActEvTopText;
    
    UPROPERTY()
    UTresUICommandInfoCockpit* m_pCommandInfoCockpit;
    
    UPROPERTY()
    UTresUIHudCommandDataAsset* m_HudCommandDataAsset;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActionPadBtn[7];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActEvTopPadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxExModePadBtn[4];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxShortcutPadBtn[4];
    
public:
    UTresUIP_HudCommand();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};


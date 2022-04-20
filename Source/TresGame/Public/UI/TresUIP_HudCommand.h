// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIHudCommandDataAsset.h"
#include "TresUICommandInfoCockpit.h"
#include "TresUIP_HudCommand.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIP_HudCommand : public UTresCockpitParts
{
	GENERATED_BODY()
public:
	struct FTresCockpitCmdInfo m_mainCmdInfoAry[0x4];
	struct FTresCockpitShortcutCmdInfo m_shortcutCmdInfoAry[0x3];

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudCommand")
	struct FTresCockpitFriendInfo m_friendInfo;

	class UGFxObject* m_pGFxRoot;
	class UGFxObject* m_pGFxActionCmdList[0x7];
	class UGFxObject* m_pGFxActionCmdData[0x7];
	class UGFxObject* m_pGFxActionCmdAct[0x7];
	class UGFxObject* m_pGFxActionCmdText[0x7];
	class UGFxObject* m_pGFxActionCmdCount[0x7];
	class UGFxObject* m_pGFxActionCmdGgAnm[0x7];
	class UGFxObject* m_pGFxActionCmdTime[0x7];
	class UGFxObject* m_pGFxActionCmdTime2[0x7];
	class UGFxObject* m_pGFxMainCmdList[0x4];
	class UGFxObject* m_pGFxSubCmdList[0x9];
	class UGFxObject* m_pGFxSubCmdText[0x9];
	class UGFxObject* m_pGFxSubCmdName[0x9];
	class UGFxObject* m_pGFxSubCmdListNext;
	class UGFxObject* m_pGFxSubCmdListNextName;
	class UGFxObject* m_pGFxUpdateMainCmd[0x2];
	class UGFxObject* m_pGFxShortcut[0x4];
	class UGFxObject* m_pGFxShortcutName[0x4];
	class UGFxObject* m_pGFxActLogoGg[0x2];

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudCommand")
	class UGFxObject* m_pGFxActEvTopText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudCommand")
	class UTresUICommandInfoCockpit* m_pCommandInfoCockpit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudCommand")
	class UTresUIHudCommandDataAsset* m_HudCommandDataAsset;

	class UGFxObject* m_pGFxActionPadBtn[0x7];
	class UGFxObject* m_pGFxActEvTopPadBtn;
	class UGFxObject* m_pGFxExModePadBtn[0x4];
	class UGFxObject* m_pGFxShortcutPadBtn[0x4];

	UFUNCTION(BlueprintNativeEvent, Category = "TresUIP_HudCommand")
	int OnCallback(int ID, int Param);
	int OnCallback_Implementation(int ID, int Param) { return 0; };
};

#pragma once
#include "CoreMinimal.h"
#include "TresCodeMenuScoreData.h"
#include "TresUIParts.h"
#include "TresCodeMenuIconData.h"
#include "TresUIP_CodeMenu.generated.h"

class UGFxObject;
class UTresASProxyTresControlsList;
class UTresUIDataAssetCodeMenu;

UCLASS()
class UTresUIP_CodeMenu : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pDlgAcheivementA;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDlgAcheivementB;
    
    UPROPERTY(Transient)
    UGFxObject* m_pWinAcheivementA;
    
    UPROPERTY(Transient)
    UGFxObject* m_pWinAcheivementB;
    
    UPROPERTY(Transient)
    UGFxObject* m_pStageEffBlack;
    
    UPROPERTY(Transient)
    UGFxObject* m_pStageFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCodeMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCodeMenuListTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCodeMenuInfoTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCodeMenuInfoBTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBtnInfo;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDlgInfoATop;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDlgInfoBTop;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_CodeMenuListA;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_CodeMenuListB;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_AchievementMenuListA;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_AchievementMenuListB;
    
    UPROPERTY(Transient)
    UGFxObject* m_pButtonHelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pHelpWindowText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTabNameAText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTabNameBText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogCheatText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogChallengeText1;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogChallengeText2;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAchievementHelpAText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAchievementHelpBText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAchievementWorldAText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pChallengeRankText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pChallengeTotalScore;
    
    UPROPERTY(Transient)
    TArray<FTresCodeMenuScoreData> m_ChallengeScores;
    
    UPROPERTY(Transient)
    TArray<FTresCodeMenuScoreData> m_WinChallengeScores;
    
    UPROPERTY(Transient)
    TArray<FTresCodeMenuIconData> m_CheatAchievementIcons;
    
    UPROPERTY(Transient)
    FTresCodeMenuIconData m_ChallengeScoreRank;
    
    UPROPERTY(Transient)
    FTresCodeMenuIconData m_WinCheatAchievement;
    
    UPROPERTY(Transient)
    FTresCodeMenuIconData m_DlgCheatAchievement;
    
    UPROPERTY(Transient)
    FTresCodeMenuIconData m_DlgChallengeScoreRank1;
    
    UPROPERTY(Transient)
    FTresCodeMenuIconData m_DlgChallengeScoreRank2;
    
    UPROPERTY(Transient)
    UTresUIDataAssetCodeMenu* m_pCodeMemuData;
    
public:
    UTresUIP_CodeMenu();
};


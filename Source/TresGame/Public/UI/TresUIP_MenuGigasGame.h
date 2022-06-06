#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_MenuGigasGame.generated.h"

class UGFxObject;
class UTresASProxyTresControlsScrollBar;
class UTresUIP_GigasGameScoreListItem;
class UTresASProxyTresControlsButton;
class UAudioComponent;

UCLASS()
class UTresUIP_MenuGigasGame : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Title;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_TitleButtons[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_RedyStart;
    
    UPROPERTY(Transient)
    UGFxObject* m_Result;
    
    UPROPERTY(Transient)
    UGFxObject* m_ResultRank;
    
    UPROPERTY(Transient)
    UGFxObject* m_ClearTimeText;
    
    UPROPERTY(Transient)
    UGFxObject* m_TotalScoreText;
    
    UPROPERTY(Transient)
    UGFxObject* m_NewRecordAnimation;
    
    UPROPERTY(Transient)
    UGFxObject* m_ScoreList;
    
    UPROPERTY(Transient)
    UTresUIP_GigasGameScoreListItem* m_ScoreListItem[9];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsScrollBar* m_ScoreListScrollBar;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* m_ResultPointRollSEAudioComponent;
    
public:
    UTresUIP_MenuGigasGame();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};


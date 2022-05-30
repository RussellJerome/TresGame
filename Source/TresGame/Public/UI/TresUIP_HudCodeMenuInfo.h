#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HudCodeMenuInfo.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;
class UTresUIDataAssetCodeMenu;

UCLASS()
class UTresUIP_HudCodeMenuInfo : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pCodeInfoTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_pRankUp;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAchievementIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTitleNameCol;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTitleLineCol;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGetAchievementEff;
    
    UPROPERTY(Transient)
    UGFxObject* m_pUpdateEff;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAchievementBase;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTitleText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAchievementNameTxt;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pIcon;
    
    UPROPERTY(Transient)
    UTresUIDataAssetCodeMenu* m_pCodeMemuData;
    
public:
    UTresUIP_HudCodeMenuInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUIParts.h"
#include "TresUIP_HudGummiShip.generated.h"

class UTresUIP_HudGummiParamSet;
class UTresUIP_HudGummiShipScore;
class UTresUIP_HudGummiShipSPWeapon;
class UTresUIP_HudGummiShipRank;
class UTresUIP_HudGummiShipItemGet;
class UTresUIP_HudGummiShipSight;
class UTresUIP_HudGummiShipGuide;
class UTresUIP_HudGummiShipRader;
class UTresUIP_HudGummiShipTech;
class UTresUIP_HudGummiShipEnemyMarkers;
class UTresUIP_HudGummiShipTargetMarkers;
class UTresUIP_HudGummiShipChain;
class UTresUIP_HudGummiShipScoreRate;
class UTresUIP_HudGummiShipBonus;
class UTresUIP_HudGummiShipAutoLock;
class UTresUIP_HudGummiShipEnemyHP;
class UTresUIP_HudGummiShipResult;
class UTresUIP_HudGummiShipAlert;
class UTresUIP_HudGummiShipAutoPilot;
class UTresUIP_HudGummiShipMessageWindow;
class UTresUIP_HudGummiShipInfomation;

UCLASS()
class UTresUIP_HudGummiShip : public UTresGumiShipUIParts {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudResultRetry);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudResultRankConfirmed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudResultFinish);
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipHudResultRankConfirmed OnResultHudRankConfirmedDispather;
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipHudResultFinish OnResultHudFinishDispather;
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipHudResultRetry OnResultHudRetryDispather;
    
private:
    UPROPERTY()
    UTresUIP_HudGummiShipSPWeapon* m_pSpWeapon;
    
    UPROPERTY()
    UTresUIP_HudGummiShipRank* m_pRank;
    
    UPROPERTY()
    UTresUIP_HudGummiShipItemGet* m_pItemGet;
    
    UPROPERTY()
    UTresUIP_HudGummiParamSet* m_pParamSet;
    
    UPROPERTY()
    UTresUIP_HudGummiShipSight* m_pSight;
    
    UPROPERTY()
    UTresUIP_HudGummiShipGuide* m_pGuide;
    
    UPROPERTY()
    UTresUIP_HudGummiShipRader* m_pRader;
    
    UPROPERTY()
    UTresUIP_HudGummiShipTech* m_pTech;
    
    UPROPERTY()
    UTresUIP_HudGummiShipEnemyMarkers* m_pMarker;
    
    UPROPERTY()
    UTresUIP_HudGummiShipTargetMarkers* m_pTarget;
    
    UPROPERTY()
    UTresUIP_HudGummiShipChain* m_pChain;
    
    UPROPERTY()
    UTresUIP_HudGummiShipScore* m_pScore;
    
    UPROPERTY()
    UTresUIP_HudGummiShipScoreRate* m_pScoreRate;
    
    UPROPERTY()
    UTresUIP_HudGummiShipBonus* m_pBonus;
    
    UPROPERTY()
    UTresUIP_HudGummiShipAutoLock* m_pAutoLock;
    
    UPROPERTY()
    UTresUIP_HudGummiShipEnemyHP* m_pEnemyHp;
    
    UPROPERTY()
    UTresUIP_HudGummiShipResult* m_pResult;
    
    UPROPERTY()
    UTresUIP_HudGummiShipAlert* m_pAlert;
    
    UPROPERTY()
    UTresUIP_HudGummiShipAutoPilot* m_pAutoPilot;
    
    UPROPERTY()
    UTresUIP_HudGummiShipMessageWindow* m_pMessageWindow;
    
    UPROPERTY()
    UTresUIP_HudGummiShipInfomation* m_pInfomation;
    
public:
    UTresUIP_HudGummiShip();
private:
    UFUNCTION()
    void _OnResultRetry();
    
    UFUNCTION()
    void _OnResultRankConfirmed();
    
    UFUNCTION()
    void _OnResultFinish();
    
};


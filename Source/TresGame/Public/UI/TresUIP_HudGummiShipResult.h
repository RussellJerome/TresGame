#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresGumiShipItemGetObjects.h"
#include "TresUIP_HudGummiShipResult.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudGummiShipResult : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudResultRetry);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudResultRankConfirmed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudResultFinish);
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipHudResultRankConfirmed OnResultRankConfirmedDispather;
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipHudResultFinish OnResultFinishDispather;
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipHudResultRetry OnResultRetryDispather;
    
private:
    UPROPERTY(Transient)
    UGFxObject* m_pBattleTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_pScore;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBonus;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTotal;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNewRecordAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pRank;
    
    UPROPERTY(Transient)
    UGFxObject* m_pRankIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBtnInfo;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBtnInfoAnim;
    
    UPROPERTY(Transient)
    UGFxObject* m_pItemNone;
    
    UPROPERTY(Transient)
    TArray<FTresGumiShipItemGetObjects> m_pItemListArray;
    
public:
    UTresUIP_HudGummiShipResult();
};


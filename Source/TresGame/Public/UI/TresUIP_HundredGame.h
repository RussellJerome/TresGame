#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HundredGame.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_HundredGame : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_gfx_charaBonus;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_honey;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_counter;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_timer;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_score;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_chain;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_buttonGuide;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_changeGuide;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_nextBonus;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_getPnt;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_countStart;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_endPop;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_bonusPop;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_result;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_winBg;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_multiItemGet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mesWin;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusBtnActSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusGauge;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusGaugeA;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusGaugeAgg;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusGaugeAgg2;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusGaugeB;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusGaugeBgg;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusGaugeBgg2;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusGaugeBase;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusChara;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusCharaAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusCharaAnm1;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusBase;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusBaseBalloon;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcHoneySet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcHoneyNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcHoneyGaugeNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcHoneyLabelLv;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcHoneyBaseEffect;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcHoneyEffSet;
    
    UPROPERTY(Transient)
    TArray<UGFxObject*> m_gfx_arrayMcHoneyEffect;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCounterSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCounterNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCounterMax;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCounterIco;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcTimerSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcTimerCntAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcTimerCntEffNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcTimerCntMain;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcTimerCntMainNumW;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcTimerCntMainNumY;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcTimerCntMainNumR;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcTimerGet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcTimerGetTmSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcTimerGetTmNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcTimerClock;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcScoreSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcScoreCounter;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainCnt;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainCntAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainCntAnmNum1;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainCntAnmNum2;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainPop;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainPopA;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainPopB;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainPopC;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainBase;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainBaseBase;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainBns;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainBnsA;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainBnsASet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainBnsANum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainBnsB;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainBnsBSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainBnsBNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainBnsC;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainBnsCSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChainBnsCNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcBtnGuideAnm1;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcBtnGuideBtn1;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcBtnGuideBtn1_2;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcBtnGuideAnm2;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcBtnGuideBtn2;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcBtnGuideBtn2_2;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChgGuideBtn1;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcNxtBtnSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcNxtBtnIco;
    
    UPROPERTY(Transient)
    TMap<uint32, UGFxObject*> m_gfx_pntGets;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcBnsPopSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcBnsPop1;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcBnsPop2;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcEndPopFinish;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcEndPopFinishLabel;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcEndPopFinishKzrA;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcEndPopFinishKzrB;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcEndPopClear;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcEndPopClearLabel;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcEndPopClearKzrA;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcEndPopClearKzrB;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcRcdNewRcd1;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcRcdNewRcd1Sw;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcRcdNewRcd2;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcRcdNewRcd2Sw;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcRcdScore;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcRcdBonus;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcRcdTotal;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcRcdShot;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcRcdRank;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcRcdRankA;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcRcdRankB;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcRcdRankC;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcRcdBee;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcRcdBalloon;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcItmTxt;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcItmWin;
    
    UPROPERTY(Transient)
    TMap<uint32, UGFxObject*> m_gfx_itmGets;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcMesAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcMesBtnY;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txMesBtnY;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcMesBtnN;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txMesBtnN;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcMesCnter;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusBtnAct;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcChBonusBtnActText;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcBtnGuideAnm1Pad;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcBtnGuideAnm1Text;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcBtnGuideAnm2Pad;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcBtnGuideAnm2Text;
    
public:
    UTresUIP_HundredGame();
};


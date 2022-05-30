#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresHudSpecialShipTargetInfo.h"
#include "TresUIP_HudSpecialShip.generated.h"

class UTresASProxyTresControlsBitmapNumber;
class UTresUIP_HudParts;
class UGFxObject;
class ATresPlayerControllerBase;
class ATresVehiclePawnSpecialShip;

UCLASS()
class UTresUIP_HudSpecialShip : public UTresCockpitParts {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresHudSpecialShipTargetInfo> m_targetInfoAry;
    
private:
    UPROPERTY(Transient)
    UTresUIP_HudParts* m_pHudParts;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxScopeMove;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxScopeMoveGauge;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxScopeMoveScope;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxScopeMoveReload;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxSpecialShip;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxShipSpeed;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxSpeedGg;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxShipHp;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxShipIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxIconEff;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxShipBase;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxGoalMeterP;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxGoalMeterL;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxGoalMeterBase;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxShipGoalMarker;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxShipGoalArrow[2];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxShipNaviMap;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxGoalMarker;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxGoalArrow[2];
    
    UPROPERTY()
    UGFxObject* m_pGFxActionCmdList[4];
    
    UPROPERTY()
    UGFxObject* m_pGFxActionCmdData[4];
    
    UPROPERTY()
    UGFxObject* m_pGFxActionCmdAct[4];
    
    UPROPERTY()
    UGFxObject* m_pGFxActionCmdText[4];
    
    UPROPERTY()
    UGFxObject* m_pGFxActionCmdCount[4];
    
    UPROPERTY()
    UGFxObject* m_pGFxActionCmdGgAnm[4];
    
    UPROPERTY()
    UGFxObject* m_pGFxActionCmdTime[4];
    
    UPROPERTY()
    UGFxObject* m_pGFxActionCmdTime2[4];
    
    UPROPERTY()
    UGFxObject* m_pGFxCmdActLogoGg[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActionPadBtn[4];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActEvTopPadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxExModePadBtn[4];
    
    UPROPERTY(Transient)
    ATresPlayerControllerBase* m_pPlayerControllerBase;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATresVehiclePawnSpecialShip> m_pVehiclePawnSpecialShip;
    
public:
    UTresUIP_HudSpecialShip();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};


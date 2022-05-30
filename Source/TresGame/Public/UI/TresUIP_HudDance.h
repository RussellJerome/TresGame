#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudDance.generated.h"

class UTresASProxyTresControlsBitmapNumber;
class UTresUIP_HudParts;
class UGFxObject;
class UTresUIDataAssetDance;

UCLASS()
class UTresUIP_HudDance : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresUIP_HudParts* m_pHudPartsGauge;
    
    UPROPERTY(Transient)
    UTresUIP_HudParts* m_pHudPartsChain;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxCmdMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxDanceResult;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxDanceCountDown;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxDanceGetTime;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxDanceGetTimeSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxDanceChainSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxNewRecord;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxGaugeBar;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxBarEffect;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxBarMask;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRankIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRankIconEff;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxNewRecordAnm1[2];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxNewRecordAnm2[2];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxGetTime[2];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxChainNormal;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxChainRapunzel;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxResultScore;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxResultChain;
    
    UPROPERTY()
    UGFxObject* m_pGFxCmdActLogoGg[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActEvTopPadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxExModePadBtn[3];
    
    UPROPERTY()
    UTresUIDataAssetDance* m_pUIDataAssetDance;
    
public:
    UTresUIP_HudDance();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};


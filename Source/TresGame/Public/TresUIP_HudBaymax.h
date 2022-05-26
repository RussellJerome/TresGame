#pragma once
#include "CoreMinimal.h"
#include "TresHudBaymaxCharaMarkerInfo.h"
#include "TresCockpitParts.h"
#include "TresHudBaymaxPointInfo.h"
#include "TresHudBaymaxLocationMarkerInfo.h"
#include "TresHudBaymaxDarkCubeInfo.h"
#include "TresUIP_HudBaymax.generated.h"

class UTresUIP_HudParts;
class UGFxObject;
class UTresASProxyTresControlsIcon;
class UTresASProxyTresControlsBitmapNumber;
class UTresTimerTask;
class UTresUIDataAssetBaymax;
class UAudioComponent;

UCLASS()
class UTresUIP_HudBaymax : public UTresCockpitParts {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresHudBaymaxPointInfo> m_pointInfoAry;
    
    UPROPERTY()
    FTresHudBaymaxLocationMarkerInfo m_locationInfo;
    
    UPROPERTY()
    FTresHudBaymaxCharaMarkerInfo m_heroInfo[4];
    
    UPROPERTY()
    FTresHudBaymaxCharaMarkerInfo m_enemyInfo;
    
    UPROPERTY()
    FTresHudBaymaxDarkCubeInfo m_darkcubeInfo;
    
private:
    UPROPERTY(Transient)
    UGFxObject* m_pHudBaymax;
    
    UPROPERTY(Transient)
    UTresUIP_HudParts* m_pHudPartsScore;
    
    UPROPERTY(Transient)
    UTresUIP_HudParts* m_pHudPartsTime;
    
    UPROPERTY(Transient)
    UTresUIP_HudParts* m_pHudPartsLiveFeed;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxLiveFeedMonitorGlow;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pGFxLiveFeedIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxDarkCube;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxMissionResult;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxReadyGo;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxFinishAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRecordScoreSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRecordScoreGlow;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxDataCategory;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRecordTimeSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRecordTimeGlow;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxTimeCategory;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxScore;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxRecordScore;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxTime[3];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxRecordTime[3];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxResultTime[3];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxResultScore;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxResultBonus;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxResultTotal;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxResultNewRecordTime;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxResultNewRecordScore;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxResultRank;
    
    UPROPERTY(Transient)
    UTresTimerTask* m_pTimerTask;
    
    UPROPERTY()
    UTresUIDataAssetBaymax* m_pUIDataAssetBaymax;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* m_ResultPointRollSEAudioComponent;
    
public:
    UTresUIP_HudBaymax();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};


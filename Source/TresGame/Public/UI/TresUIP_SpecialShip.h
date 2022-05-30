#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresSpecialShipPointInfo.h"
#include "TresUIP_SpecialShip.generated.h"

class UTresUIP_HudParts;
class UDataTable;
class UGFxObject;
class UTresASProxyTresControlsBitmapNumber;

UCLASS()
class UTresUIP_SpecialShip : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UDataTable* m_DataTableNauticalChart;
    
    UPROPERTY(Transient)
    UTresUIP_HudParts* m_pHudParts;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxNauticalChart;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxPowerUpWin;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxBtnInfo;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxBtnInfoText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxShipStatus;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxTxShipName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxLevelMax;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxNumLv;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxGaugeNext;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxNumNext;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxNumCrab;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxNumHpMax;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxNumAttack;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxNumCannon1;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxNumCannon2;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxChartInfo1;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxChartInfo2;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxPlaceName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxCursor;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxMarkerP;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxMarkerPIcon;
    
    UPROPERTY(Transient)
    FTresSpecialShipPointInfo m_pointInfoAry[13];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxWinNumLv;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxWinNumHpMax;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxWinNumAttack;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxWinNumCannon1;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxWinNumCannon2;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxCrabNextLv;
    
public:
    UTresUIP_SpecialShip();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};


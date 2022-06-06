#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresHudGigasMarkerInfo.h"
#include "TresUIP_HudGigas.generated.h"

class UGFxObject;
class ATresVehiclePawnGigas;

UCLASS()
class UTresUIP_HudGigas : public UTresCockpitParts {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresHudGigasMarkerInfo> m_markerInfoAry;
    
private:
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxGigasHud;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxTargetMark[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxLineAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxHudBgAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxNaviMapDisplay;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxAttackPadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxActionPadBtn[5];
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATresVehiclePawnGigas> m_pVehiclePawnGigas;
    
public:
    UTresUIP_HudGigas();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};


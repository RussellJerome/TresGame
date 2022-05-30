#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresHudSRideTargetInfo.h"
#include "TresUIP_HudSRide.generated.h"

class UTresASProxyTresControlsBitmapNumber;
class UTresUIP_HudParts;
class UGFxObject;

UCLASS()
class UTresUIP_HudSRide : public UTresCockpitParts {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresHudSRideTargetInfo> m_targetInfoAry;
    
private:
    UPROPERTY(Transient)
    UTresUIP_HudParts* m_pHudParts;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxSRideHud;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxGoggle;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxNewRecord;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxGlowLine;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxBoostBar;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxTargetSet;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxHighScore;
    
public:
    UTresUIP_HudSRide();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};


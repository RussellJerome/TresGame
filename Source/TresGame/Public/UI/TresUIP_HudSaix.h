#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HudSaix.generated.h"

class UTresUIP_HudParts;
class UGFxObject;

UCLASS()
class UTresUIP_HudSaix : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresUIP_HudParts* m_pHudParts;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxBerserkGauge[4];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxGaugeAnm[4];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxGauge[4];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxGaugeGradation[4];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxGaugeFlashAnm[4];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxGaugePlate;
    
public:
    UTresUIP_HudSaix();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};


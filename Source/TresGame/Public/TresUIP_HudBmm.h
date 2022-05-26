#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresHudBmmTargetInfo.h"
#include "TresUIP_HudBmm.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_HudBmm : public UTresCockpitParts {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTresHudBmmTargetInfo m_chanceInfo;
    
private:
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxBmmTarget;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxBmmTargetAnm;
    
public:
    UTresUIP_HudBmm();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};


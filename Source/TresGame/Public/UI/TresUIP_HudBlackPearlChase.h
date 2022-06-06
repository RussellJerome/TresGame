#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HudBlackPearlChase.generated.h"

class UTresUIP_HudParts;
class UGFxObject;

UCLASS()
class UTresUIP_HudBlackPearlChase : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresUIP_HudParts* m_pHudParts;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxMarkerP;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxMarkerB;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxBase;
    
public:
    UTresUIP_HudBlackPearlChase();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};


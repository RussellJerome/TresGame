#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHUD.generated.h"

class UTresUIDataAssetCockpit;
class UTresCockpit;

UCLASS(NonTransient)
class ATresHUD : public ATresHUDBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAssetCockpit* m_CockpitData;
    
public:
    UPROPERTY(Transient)
    UTresCockpit* TresCockpit;
    
    ATresHUD();
};


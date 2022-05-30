#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSPWeaponGauge.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresGumiShipSPWeaponGauge {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* m_pRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGaugeBody;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGaugeEff;
    
    TRESGAME_API FTresGumiShipSPWeaponGauge();
};


#pragma once
#include "CoreMinimal.h"
#include "TresProj_MagicBase.h"
#include "TresProj_MagicWater.generated.h"

UCLASS(Abstract)
class ATresProj_MagicWater : public ATresProj_MagicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bSetFallingIfNoHoming: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bVikingShipSplash: 1;
    
public:
    ATresProj_MagicWater();
};


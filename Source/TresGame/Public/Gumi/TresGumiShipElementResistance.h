#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipElementResistance.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipElementResistance {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fShot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLaser;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStrike;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpecial;
    
    TRESGAME_API FTresGumiShipElementResistance();
};


#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipAttackElementResistance.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipAttackElementResistance {
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
    
    TRESGAME_API FTresGumiShipAttackElementResistance();
};


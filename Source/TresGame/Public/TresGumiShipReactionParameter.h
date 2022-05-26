#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipObjectSize.h"
#include "TresGumiShipReactionResistance.h"
#include "TresGumiShipBadStateResistance.h"
#include "TresGumiShipReactionParameter.generated.h"

USTRUCT()
struct FTresGumiShipReactionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMass;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGumiShipObjectSize m_eSizeType;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipReactionResistance m_ReactionResistance;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipBadStateResistance m_BadStateResistance;
    
    TRESGAME_API FTresGumiShipReactionParameter();
};


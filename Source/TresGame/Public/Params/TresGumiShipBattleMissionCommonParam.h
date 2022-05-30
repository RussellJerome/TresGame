#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBattleMissionCommonParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMissionCommonParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint32 m_udNoDamageBonus;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_udBrokePartsBonus;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_udDefeatedGroupBonus;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDamageScoreCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fScoreRates[8];
    
    TRESGAME_API FTresGumiShipBattleMissionCommonParam();
};


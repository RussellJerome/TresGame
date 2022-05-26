#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipBattleMissionType.h"
#include "TresGumiShipBattleMisisonBonusWithConditionI.h"
#include "TresGumiShipBattleMissionIndividalParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMissionIndividalParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresGumiShipBattleMissionType m_eBattleType;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_udScoreOfRanks[5];
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_dTimeBonus[8];
    
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipBattleMisisonBonusWithConditionI m_DefeatedBonus[3];
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_udTimeLimitSeconds;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_udNumbetOfDefeated;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ItemDataName;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_InfoMesLabel;
    
    TRESGAME_API FTresGumiShipBattleMissionIndividalParam();
};


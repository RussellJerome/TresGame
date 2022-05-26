#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBattleMisisonBonusWithConditionI.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMisisonBonusWithConditionI {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint32 m_udBonusPoint;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_dConditionValue;
    
    TRESGAME_API FTresGumiShipBattleMisisonBonusWithConditionI();
};


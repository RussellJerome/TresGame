#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBattleMisisonBonusWithConditionF.generated.h"

USTRUCT()
struct FTresGumiShipBattleMisisonBonusWithConditionF {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fBonusPoint;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_dConditionValue;
    
    TRESGAME_API FTresGumiShipBattleMisisonBonusWithConditionF();
};


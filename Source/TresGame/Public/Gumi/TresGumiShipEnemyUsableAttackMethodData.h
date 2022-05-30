#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipEnemyStateID.h"
#include "TresGumiShipEnemyUsableAttackMethodData.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipEnemyUsableAttackMethodData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ETresGumiShipEnemyStateID m_eAttackStateID;
    
    TRESGAME_API FTresGumiShipEnemyUsableAttackMethodData();
};


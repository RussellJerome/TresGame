#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerBaseCommonParameter.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipPlayerBaseCommonParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fHitPoint;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackPoint;
    
    TRESGAME_API FTresGumiShipPlayerBaseCommonParameter();
};


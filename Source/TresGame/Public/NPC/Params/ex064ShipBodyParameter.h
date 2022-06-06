#pragma once
#include "CoreMinimal.h"
#include "ex064ShipBodyParameter.generated.h"

USTRUCT(BlueprintType)
struct Fex064ShipBodyParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_ShipBodyHP;
    
    UPROPERTY(EditAnywhere)
    float m_DamageWeightFromPlayer;
    
    UPROPERTY(EditAnywhere)
    float m_DamageWeightFromEnemy;
    
    TRESGAME_API Fex064ShipBodyParameter();
};


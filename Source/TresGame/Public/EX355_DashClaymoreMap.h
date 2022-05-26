#pragma once
#include "CoreMinimal.h"
#include "EX355_DashClaymoreMap.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FEX355_DashClaymoreMap {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectileBase* m_pLastProj;
    
    TRESGAME_API FEX355_DashClaymoreMap();
};


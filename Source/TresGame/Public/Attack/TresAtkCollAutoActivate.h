#pragma once
#include "CoreMinimal.h"
#include "TresAtkCollAutoActivate.generated.h"

USTRUCT(BlueprintType)
struct FTresAtkCollAutoActivate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_GrpName;
    
    UPROPERTY(EditAnywhere)
    FName m_AttackDataIDName;
    
    UPROPERTY(EditAnywhere)
    float m_AttackInterval;
    
    TRESGAME_API FTresAtkCollAutoActivate();
};


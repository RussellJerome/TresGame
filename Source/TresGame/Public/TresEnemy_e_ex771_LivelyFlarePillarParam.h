#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex771_LivelyFlarePillarParam.generated.h"

class AActor;
class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_LivelyFlarePillarParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_Target;
    
    UPROPERTY()
    ATresProjectileBase* m_LivelyFlarePillar;
    
    TRESGAME_API FTresEnemy_e_ex771_LivelyFlarePillarParam();
};


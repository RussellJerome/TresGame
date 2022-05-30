#pragma once
#include "CoreMinimal.h"
#include "TresTeaCupPuddingData.generated.h"

class ATresEnemyPawn_e_ex050;

USTRUCT(BlueprintType)
struct FTresTeaCupPuddingData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresEnemyPawn_e_ex050* m_pPuddingPawn;
    
public:
    TRESGAME_API FTresTeaCupPuddingData();
};


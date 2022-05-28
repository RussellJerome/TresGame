#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx773_BlowParam.generated.h"

class AActor;
class ATresActor_e_ex773_Attract;

USTRUCT(BlueprintType)
struct FTresEnemyEx773_BlowParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresActor_e_ex773_Attract* m_pBlow;
    
    UPROPERTY()
    AActor* m_pTarget;
    
    TRESGAME_API FTresEnemyEx773_BlowParam();
};


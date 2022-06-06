#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx071DeckKind.h"
#include "TresEnemyPawn_e_ca901_JointParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyPawn_e_ca901_JointParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FName m_JointName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_OppositeAttachIndex;
    
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx071DeckKind m_Kind;
    
public:
    TRESGAME_API FTresEnemyPawn_e_ca901_JointParam();
};


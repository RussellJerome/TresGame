#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleTotalScoreEvalution.h"
#include "TresWinniePuzzleFirstPlayReward.h"
#include "ETresItemDefBattleItem.h"
#include "TresWinniePuzzleResult.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleResult : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleTotalScoreEvalution> TotalScoreEvalution;
    
    UPROPERTY(EditDefaultsOnly)
    float WaitTimeToShowResultDetail;
    
    UPROPERTY(EditDefaultsOnly)
    float WaitTimeToRetry;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleFirstPlayReward> FirstPlayRewards;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefBattleItem LowerGoodReward;
    
    UPROPERTY(EditDefaultsOnly)
    FName ScenarioFlagName;
    
    UPROPERTY(EditDefaultsOnly)
    FName ScenarioLabelName;
    
public:
    UTresWinniePuzzleResult();
};


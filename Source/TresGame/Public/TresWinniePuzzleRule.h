#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "WinniePuzzleRuleGameClearCondition.h"
#include "WinniePuzzleRuleGameOverCondition.h"
#include "TresWinniePuzzleChallengeModeLimitTimeIncreaseParam.h"
#include "TresWinniePuzzleRule.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleRule : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<WinniePuzzleRuleGameClearCondition> GameClearCondition;
    
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleRuleGameOverCondition GameOverCondition;
    
    UPROPERTY(EditDefaultsOnly)
    float LimitTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 earnedUnitsNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DecreaseColumnsNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 IncreaseColumnsNum;
    
    UPROPERTY(EditDefaultsOnly)
    float ChallengeModeLimitTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleChallengeModeLimitTimeIncreaseParam> LimitTimeIncreaseParam;
    
    UPROPERTY(EditDefaultsOnly)
    int32 LimitTimeMax;
    
    UPROPERTY(EditDefaultsOnly)
    int32 LimitTimeMaxOnChallengeMode;
    
    UPROPERTY(EditDefaultsOnly)
    float TimerYellowWarningTime;
    
    UPROPERTY(EditDefaultsOnly)
    float TimerRedWarningTime;
    
    UTresWinniePuzzleRule();
};


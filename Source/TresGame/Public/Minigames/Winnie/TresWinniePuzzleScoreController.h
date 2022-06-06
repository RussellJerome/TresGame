#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleScoreEvalutionInOneTurnParam.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleAdditionalBonusParam.h"
#include "TresWinniePuzzleUnitScoreParam.h"
#include "TresWinniePuzzleComboEvalutionParam.h"
#include "WinniePuzzleScoreEvalutionInOneTurnJudgementMethod.h"
#include "TresWinniePuzzleScoreController.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleScoreController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAddBonusScore);
    
    UPROPERTY(BlueprintAssignable)
    FOnAddBonusScore OnAddBonusScore;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FTresWinniePuzzleComboEvalutionParam ComboEvalutionParam;
    
    UPROPERTY(EditDefaultsOnly)
    FTresWinniePuzzleUnitScoreParam UnitScoreParam;
    
    UPROPERTY(EditDefaultsOnly)
    FTresWinniePuzzleAdditionalBonusParam AdditionalBonusParam;
    
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleScoreEvalutionInOneTurnJudgementMethod ScoreEvalutionInOneTurnJudgementMethod;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleScoreEvalutionInOneTurnParam> ScoreEvalutionInOneTurnParam;
    
public:
    UTresWinniePuzzleScoreController();
};


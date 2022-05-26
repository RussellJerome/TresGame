#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleDecreaseStyleParam.h"
#include "TresWinniePuzzleCharacterBonusDecreaseParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleCharacterBonusDecreaseParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleDecreaseStyleParam> StyleParam;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleDecreaseStyleParam> StyleParamAdditionalInvocation;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinColumn;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveWaitTime1st;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveWaitTime1stWhenReserved;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveWaitTime2nd;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveHeightMin;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveHeightMax;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveDelayTimeCorrectionValue;
    
    UPROPERTY(EditDefaultsOnly)
    float WaitTimeTo2ndMove;
    
    UPROPERTY(EditDefaultsOnly)
    float GotoFillUnitsPhaseWaitTime;
    
    TRESGAME_API FTresWinniePuzzleCharacterBonusDecreaseParam();
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleComponentBase.h"
#include "WinniePuzzleCharacterBonusGaugeType.h"
#include "WinniePuzzleCharacterBonusType.h"
#include "TresWinniePuzzleComboBonusGaugeIncreaseParam.h"
#include "TresWinniePuzzleBonusGaugeAlwaysDecreasingParam.h"
#include "TresWinniePuzzleCharacterBonusController.generated.h"

class ATresCameraEmitterLensEffect;
class UForceFeedbackEffect;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleCharacterBonusController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleCharacterBonusType BonusType;
    
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleCharacterBonusGaugeType BonusGaugeType;
    
    UPROPERTY(EditDefaultsOnly)
    bool ForbidAutoInvocation;
    
    UPROPERTY(EditDefaultsOnly)
    float BonusGaugeMaxValue;
    
    UPROPERTY(EditDefaultsOnly)
    float BonusGaugeChangeRate;
    
    UPROPERTY(EditDefaultsOnly)
    float GaugeIncreaseEffectLifetime;
    
    UPROPERTY(EditDefaultsOnly)
    FTresWinniePuzzleComboBonusGaugeIncreaseParam ComboBonusGaugeIncreaseParam;
    
    UPROPERTY(EditDefaultsOnly)
    FTresWinniePuzzleComboBonusGaugeIncreaseParam ComboBonusGaugeIncreaseParamOnSecond;
    
    UPROPERTY(EditDefaultsOnly)
    FTresWinniePuzzleBonusGaugeAlwaysDecreasingParam BonusGaugeAlwaysDecreasingParam;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraEmitterLensEffect> InvokingLensEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float InvokingLensEffectLoopEndWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    UForceFeedbackEffect* ForceFeedbackGaugeMax1st;
    
    UPROPERTY(EditDefaultsOnly)
    UForceFeedbackEffect* ForceFeedbackGaugeMax2nd;
    
public:
    UTresWinniePuzzleCharacterBonusController();
};


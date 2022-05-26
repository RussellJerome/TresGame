#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleBonusController.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleBonusController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 BonusTurnsNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 UnitTypeCandidateNum;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> BonusUnitRandomRate;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> BonusUnitRandomRateWhenPrevTypeExist;
    
public:
    UTresWinniePuzzleBonusController();
};


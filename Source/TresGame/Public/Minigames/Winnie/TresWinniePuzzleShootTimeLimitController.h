#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleShootTimeLimitController.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleShootTimeLimitController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool EnableShootTimeLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float ShootLimitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float BonusTimeMaxWhenStrike;
    
    UPROPERTY(EditDefaultsOnly)
    float BonusTimeWhenStrike;
    
public:
    UTresWinniePuzzleShootTimeLimitController();
};


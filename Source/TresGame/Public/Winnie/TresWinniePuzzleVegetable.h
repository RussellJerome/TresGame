#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleBase.h"
#include "TresWinniePuzzleCharacterBonusBoundParam.h"
#include "TresWinniePuzzleVegetable.generated.h"

class ATresWinniePuzzleTiggerPawn;
class ATresWinniePuzzleRabbitPawn;

UCLASS()
class ATresWinniePuzzleVegetable : public ATresWinniePuzzleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzleRabbitPawn> RabbitPawn;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzleTiggerPawn> TiggerPawn;
    
    UPROPERTY(EditDefaultsOnly)
    FTresWinniePuzzleCharacterBonusBoundParam BoundParam;
    
private:
    UPROPERTY(Transient)
    ATresWinniePuzzleRabbitPawn* m_pRabbitPawn;
    
    UPROPERTY(Transient)
    ATresWinniePuzzleTiggerPawn* m_pTiggerPawn;
    
public:
    ATresWinniePuzzleVegetable();
};

